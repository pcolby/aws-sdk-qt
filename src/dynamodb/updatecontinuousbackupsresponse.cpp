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

#include "updatecontinuousbackupsresponse.h"
#include "updatecontinuousbackupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDB {

/*!
 * \class QtAws::DynamoDB::UpdateContinuousBackupsResponse
 * \brief The UpdateContinuousBackupsResponse class provides an interace for DynamoDB UpdateContinuousBackups responses.
 *
 * \inmodule QtAwsDynamoDB
 *
 *  <fullname>Amazon DynamoDB</fullname>
 * 
 *  Amazon DynamoDB is a fully managed NoSQL database service that provides fast and predictable performance with seamless
 *  scalability. DynamoDB lets you offload the administrative burdens of operating and scaling a distributed database, so
 *  that you don't have to worry about hardware provisioning, setup and configuration, replication, software patching, or
 *  cluster
 * 
 *  scaling>
 * 
 *  With DynamoDB, you can create database tables that can store and retrieve any amount of data, and serve any level of
 *  request traffic. You can scale up or scale down your tables' throughput capacity without downtime or performance
 *  degradation, and use the AWS Management Console to monitor resource utilization and performance
 * 
 *  metrics>
 * 
 *  DynamoDB automatically spreads the data and traffic for your tables over a sufficient number of servers to handle your
 *  throughput and storage requirements, while maintaining consistent and fast performance. All of your data is stored on
 *  solid state disks (SSDs) and automatically replicated across multiple Availability Zones in an AWS region, providing
 *  built-in high availability and data durability.
 *
 * \sa DynamoDBClient::updateContinuousBackups
 */

/*!
 * Constructs a UpdateContinuousBackupsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateContinuousBackupsResponse::UpdateContinuousBackupsResponse(
        const UpdateContinuousBackupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDBResponse(new UpdateContinuousBackupsResponsePrivate(this), parent)
{
    setRequest(new UpdateContinuousBackupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateContinuousBackupsRequest * UpdateContinuousBackupsResponse::request() const
{
    Q_D(const UpdateContinuousBackupsResponse);
    return static_cast<const UpdateContinuousBackupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DynamoDB UpdateContinuousBackups \a response.
 */
void UpdateContinuousBackupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateContinuousBackupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DynamoDB::UpdateContinuousBackupsResponsePrivate
 * \brief The UpdateContinuousBackupsResponsePrivate class provides private implementation for UpdateContinuousBackupsResponse.
 * \internal
 *
 * \inmodule QtAwsDynamoDB
 */

/*!
 * Constructs a UpdateContinuousBackupsResponsePrivate object with public implementation \a q.
 */
UpdateContinuousBackupsResponsePrivate::UpdateContinuousBackupsResponsePrivate(
    UpdateContinuousBackupsResponse * const q) : DynamoDBResponsePrivate(q)
{

}

/*!
 * Parses a DynamoDB UpdateContinuousBackups response element from \a xml.
 */
void UpdateContinuousBackupsResponsePrivate::parseUpdateContinuousBackupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateContinuousBackupsResponse"));
    /// @todo
}

} // namespace DynamoDB
} // namespace QtAws
