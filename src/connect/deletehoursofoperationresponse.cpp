// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletehoursofoperationresponse.h"
#include "deletehoursofoperationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::DeleteHoursOfOperationResponse
 * \brief The DeleteHoursOfOperationResponse class provides an interace for Connect DeleteHoursOfOperation responses.
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
 * \sa ConnectClient::deleteHoursOfOperation
 */

/*!
 * Constructs a DeleteHoursOfOperationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteHoursOfOperationResponse::DeleteHoursOfOperationResponse(
        const DeleteHoursOfOperationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectResponse(new DeleteHoursOfOperationResponsePrivate(this), parent)
{
    setRequest(new DeleteHoursOfOperationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteHoursOfOperationRequest * DeleteHoursOfOperationResponse::request() const
{
    Q_D(const DeleteHoursOfOperationResponse);
    return static_cast<const DeleteHoursOfOperationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Connect DeleteHoursOfOperation \a response.
 */
void DeleteHoursOfOperationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteHoursOfOperationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Connect::DeleteHoursOfOperationResponsePrivate
 * \brief The DeleteHoursOfOperationResponsePrivate class provides private implementation for DeleteHoursOfOperationResponse.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a DeleteHoursOfOperationResponsePrivate object with public implementation \a q.
 */
DeleteHoursOfOperationResponsePrivate::DeleteHoursOfOperationResponsePrivate(
    DeleteHoursOfOperationResponse * const q) : ConnectResponsePrivate(q)
{

}

/*!
 * Parses a Connect DeleteHoursOfOperation response element from \a xml.
 */
void DeleteHoursOfOperationResponsePrivate::parseDeleteHoursOfOperationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteHoursOfOperationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Connect
} // namespace QtAws
