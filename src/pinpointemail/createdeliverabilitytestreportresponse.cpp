/*
    Copyright 2013-2018 Paul Colby

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

#include "createdeliverabilitytestreportresponse.h"
#include "createdeliverabilitytestreportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PinpointEmail {

/*!
 * \class QtAws::PinpointEmail::CreateDeliverabilityTestReportResponse
 * \brief The CreateDeliverabilityTestReportResponse class provides an interace for PinpointEmail CreateDeliverabilityTestReport responses.
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
 * \sa PinpointEmailClient::createDeliverabilityTestReport
 */

/*!
 * Constructs a CreateDeliverabilityTestReportResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDeliverabilityTestReportResponse::CreateDeliverabilityTestReportResponse(
        const CreateDeliverabilityTestReportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointEmailResponse(new CreateDeliverabilityTestReportResponsePrivate(this), parent)
{
    setRequest(new CreateDeliverabilityTestReportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDeliverabilityTestReportRequest * CreateDeliverabilityTestReportResponse::request() const
{
    Q_D(const CreateDeliverabilityTestReportResponse);
    return static_cast<const CreateDeliverabilityTestReportRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PinpointEmail CreateDeliverabilityTestReport \a response.
 */
void CreateDeliverabilityTestReportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDeliverabilityTestReportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PinpointEmail::CreateDeliverabilityTestReportResponsePrivate
 * \brief The CreateDeliverabilityTestReportResponsePrivate class provides private implementation for CreateDeliverabilityTestReportResponse.
 * \internal
 *
 * \inmodule QtAwsPinpointEmail
 */

/*!
 * Constructs a CreateDeliverabilityTestReportResponsePrivate object with public implementation \a q.
 */
CreateDeliverabilityTestReportResponsePrivate::CreateDeliverabilityTestReportResponsePrivate(
    CreateDeliverabilityTestReportResponse * const q) : PinpointEmailResponsePrivate(q)
{

}

/*!
 * Parses a PinpointEmail CreateDeliverabilityTestReport response element from \a xml.
 */
void CreateDeliverabilityTestReportResponsePrivate::parseCreateDeliverabilityTestReportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDeliverabilityTestReportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PinpointEmail
} // namespace QtAws
