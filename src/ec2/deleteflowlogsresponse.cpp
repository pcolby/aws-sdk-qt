/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deleteflowlogsresponse.h"
#include "deleteflowlogsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DeleteFlowLogsResponse
 * \brief The DeleteFlowLogsResponse class provides an interace for EC2 DeleteFlowLogs responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::deleteFlowLogs
 */

/*!
 * Constructs a DeleteFlowLogsResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFlowLogsResponse::DeleteFlowLogsResponse(
        const DeleteFlowLogsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DeleteFlowLogsResponsePrivate(this), parent)
{
    setRequest(new DeleteFlowLogsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteFlowLogsRequest * DeleteFlowLogsResponse::request() const
{
    Q_D(const DeleteFlowLogsResponse);
    return static_cast<const DeleteFlowLogsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DeleteFlowLogs \a response.
 */
void DeleteFlowLogsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteFlowLogsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DeleteFlowLogsResponsePrivate
 * \brief The DeleteFlowLogsResponsePrivate class provides private implementation for DeleteFlowLogsResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DeleteFlowLogsResponsePrivate object with public implementation \a q.
 */
DeleteFlowLogsResponsePrivate::DeleteFlowLogsResponsePrivate(
    DeleteFlowLogsResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DeleteFlowLogs response element from \a xml.
 */
void DeleteFlowLogsResponsePrivate::parseDeleteFlowLogsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFlowLogsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
