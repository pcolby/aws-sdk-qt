// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopcontactresponse.h"
#include "stopcontactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::StopContactResponse
 * \brief The StopContactResponse class provides an interace for Connect StopContact responses.
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
 * \sa ConnectClient::stopContact
 */

/*!
 * Constructs a StopContactResponse object for \a reply to \a request, with parent \a parent.
 */
StopContactResponse::StopContactResponse(
        const StopContactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectResponse(new StopContactResponsePrivate(this), parent)
{
    setRequest(new StopContactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopContactRequest * StopContactResponse::request() const
{
    Q_D(const StopContactResponse);
    return static_cast<const StopContactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Connect StopContact \a response.
 */
void StopContactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopContactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Connect::StopContactResponsePrivate
 * \brief The StopContactResponsePrivate class provides private implementation for StopContactResponse.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a StopContactResponsePrivate object with public implementation \a q.
 */
StopContactResponsePrivate::StopContactResponsePrivate(
    StopContactResponse * const q) : ConnectResponsePrivate(q)
{

}

/*!
 * Parses a Connect StopContact response element from \a xml.
 */
void StopContactResponsePrivate::parseStopContactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopContactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Connect
} // namespace QtAws
