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

#include "createflowlogsresponse.h"
#include "createflowlogsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CreateFlowLogsResponse
 * \brief The CreateFlowLogsResponse class provides an interace for EC2 CreateFlowLogs responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::createFlowLogs
 */

/*!
 * Constructs a CreateFlowLogsResponse object for \a reply to \a request, with parent \a parent.
 */
CreateFlowLogsResponse::CreateFlowLogsResponse(
        const CreateFlowLogsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new CreateFlowLogsResponsePrivate(this), parent)
{
    setRequest(new CreateFlowLogsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateFlowLogsRequest * CreateFlowLogsResponse::request() const
{
    Q_D(const CreateFlowLogsResponse);
    return static_cast<const CreateFlowLogsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 CreateFlowLogs \a response.
 */
void CreateFlowLogsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateFlowLogsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::CreateFlowLogsResponsePrivate
 * \brief The CreateFlowLogsResponsePrivate class provides private implementation for CreateFlowLogsResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a CreateFlowLogsResponsePrivate object with public implementation \a q.
 */
CreateFlowLogsResponsePrivate::CreateFlowLogsResponsePrivate(
    CreateFlowLogsResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 CreateFlowLogs response element from \a xml.
 */
void CreateFlowLogsResponsePrivate::parseCreateFlowLogsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFlowLogsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
