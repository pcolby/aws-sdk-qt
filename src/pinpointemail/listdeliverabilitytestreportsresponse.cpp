/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listdeliverabilitytestreportsresponse.h"
#include "listdeliverabilitytestreportsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PinpointEmail {

/*!
 * \class QtAws::PinpointEmail::ListDeliverabilityTestReportsResponse
 * \brief The ListDeliverabilityTestReportsResponse class provides an interace for PinpointEmail ListDeliverabilityTestReports responses.
 *
 * \inmodule QtAwsPinpointEmail
 *
 *  <fullname>Amazon Pinpoint Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/pinpoint">Amazon Pinpoint</a> Email
 *  API, version 1.0. This document is best used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/pinpoint/latest/developerguide/welcome.html">Amazon Pinpoint Developer
 * 
 *  Guide</a>>
 * 
 *  The Amazon Pinpoint Email API is available in the US East (N. Virginia), US West (Oregon) and the EU (Ireland) Regions
 *  at the following
 * 
 *  endpoints> <ul> <li>
 * 
 *  <b>US East (N. Virginia)</b>: <code>email.us-east-1.amazonaws.com</code>
 * 
 *  </p </li> <li>
 * 
 *  <b>US West (Oregon)</b>: <code>email.us-west-2.amazonaws.com</code>
 * 
 *  </p </li> <li>
 * 
 *  <b>EU (Ireland)</b>: <code>email.eu-west-1.amazonaws.com</code>
 *
 * \sa PinpointEmailClient::listDeliverabilityTestReports
 */

/*!
 * Constructs a ListDeliverabilityTestReportsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDeliverabilityTestReportsResponse::ListDeliverabilityTestReportsResponse(
        const ListDeliverabilityTestReportsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointEmailResponse(new ListDeliverabilityTestReportsResponsePrivate(this), parent)
{
    setRequest(new ListDeliverabilityTestReportsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDeliverabilityTestReportsRequest * ListDeliverabilityTestReportsResponse::request() const
{
    Q_D(const ListDeliverabilityTestReportsResponse);
    return static_cast<const ListDeliverabilityTestReportsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PinpointEmail ListDeliverabilityTestReports \a response.
 */
void ListDeliverabilityTestReportsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDeliverabilityTestReportsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PinpointEmail::ListDeliverabilityTestReportsResponsePrivate
 * \brief The ListDeliverabilityTestReportsResponsePrivate class provides private implementation for ListDeliverabilityTestReportsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpointEmail
 */

/*!
 * Constructs a ListDeliverabilityTestReportsResponsePrivate object with public implementation \a q.
 */
ListDeliverabilityTestReportsResponsePrivate::ListDeliverabilityTestReportsResponsePrivate(
    ListDeliverabilityTestReportsResponse * const q) : PinpointEmailResponsePrivate(q)
{

}

/*!
 * Parses a PinpointEmail ListDeliverabilityTestReports response element from \a xml.
 */
void ListDeliverabilityTestReportsResponsePrivate::parseListDeliverabilityTestReportsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDeliverabilityTestReportsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PinpointEmail
} // namespace QtAws
