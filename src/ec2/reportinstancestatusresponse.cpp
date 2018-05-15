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

#include "reportinstancestatusresponse.h"
#include "reportinstancestatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ReportInstanceStatusResponse
 * \brief The ReportInstanceStatusResponse class provides an interace for EC2 ReportInstanceStatus responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::reportInstanceStatus
 */

/*!
 * Constructs a ReportInstanceStatusResponse object for \a reply to \a request, with parent \a parent.
 */
ReportInstanceStatusResponse::ReportInstanceStatusResponse(
        const ReportInstanceStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new ReportInstanceStatusResponsePrivate(this), parent)
{
    setRequest(new ReportInstanceStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ReportInstanceStatusRequest * ReportInstanceStatusResponse::request() const
{
    Q_D(const ReportInstanceStatusResponse);
    return static_cast<const ReportInstanceStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 ReportInstanceStatus \a response.
 */
void ReportInstanceStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ReportInstanceStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::ReportInstanceStatusResponsePrivate
 * \brief The ReportInstanceStatusResponsePrivate class provides private implementation for ReportInstanceStatusResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a ReportInstanceStatusResponsePrivate object with public implementation \a q.
 */
ReportInstanceStatusResponsePrivate::ReportInstanceStatusResponsePrivate(
    ReportInstanceStatusResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 ReportInstanceStatus response element from \a xml.
 */
void ReportInstanceStatusResponsePrivate::parseReportInstanceStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ReportInstanceStatusResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
