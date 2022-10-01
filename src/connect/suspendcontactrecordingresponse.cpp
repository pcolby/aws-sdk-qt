// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "suspendcontactrecordingresponse.h"
#include "suspendcontactrecordingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::SuspendContactRecordingResponse
 * \brief The SuspendContactRecordingResponse class provides an interace for Connect SuspendContactRecording responses.
 *
 * \inmodule QtAwsConnect
 *
 *  Amazon Connect is a cloud-based contact center solution that you use to set up and manage a customer contact center and
 *  provide reliable customer engagement at any
 * 
 *  scale>
 * 
 *  Amazon Connect provides metrics and real-time reporting that enable you to optimize contact routing. You can also
 *  resolve customer issues more efficiently by getting customers in touch with the appropriate
 * 
 *  agents>
 * 
 *  There are limits to the number of Amazon Connect resources that you can create. There are also limits to the number of
 *  requests that you can make per second. For more information, see <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">Amazon Connect Service
 *  Quotas</a> in the <i>Amazon Connect Administrator
 * 
 *  Guide</i>>
 * 
 *  You can connect programmatically to an Amazon Web Services service by using an endpoint. For a list of Amazon Connect
 *  endpoints, see <a href="https://docs.aws.amazon.com/general/latest/gr/connect_region.html">Amazon Connect
 * 
 *  Endpoints</a>> <note>
 * 
 *  Working with flows? Check out the <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon Connect Flow
 *
 * \sa ConnectClient::suspendContactRecording
 */

/*!
 * Constructs a SuspendContactRecordingResponse object for \a reply to \a request, with parent \a parent.
 */
SuspendContactRecordingResponse::SuspendContactRecordingResponse(
        const SuspendContactRecordingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectResponse(new SuspendContactRecordingResponsePrivate(this), parent)
{
    setRequest(new SuspendContactRecordingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SuspendContactRecordingRequest * SuspendContactRecordingResponse::request() const
{
    Q_D(const SuspendContactRecordingResponse);
    return static_cast<const SuspendContactRecordingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Connect SuspendContactRecording \a response.
 */
void SuspendContactRecordingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SuspendContactRecordingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Connect::SuspendContactRecordingResponsePrivate
 * \brief The SuspendContactRecordingResponsePrivate class provides private implementation for SuspendContactRecordingResponse.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a SuspendContactRecordingResponsePrivate object with public implementation \a q.
 */
SuspendContactRecordingResponsePrivate::SuspendContactRecordingResponsePrivate(
    SuspendContactRecordingResponse * const q) : ConnectResponsePrivate(q)
{

}

/*!
 * Parses a Connect SuspendContactRecording response element from \a xml.
 */
void SuspendContactRecordingResponsePrivate::parseSuspendContactRecordingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SuspendContactRecordingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Connect
} // namespace QtAws
