/*
    Copyright 2013-2021 Paul Colby

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

#include "updatecapacityproviderresponse.h"
#include "updatecapacityproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECS {

/*!
 * \class QtAws::ECS::UpdateCapacityProviderResponse
 * \brief The UpdateCapacityProviderResponse class provides an interace for ECS UpdateCapacityProvider responses.
 *
 * \inmodule QtAwsECS
 *
 *  <fullname>Amazon Elastic Container Service</fullname>
 * 
 *  Amazon Elastic Container Service (Amazon ECS) is a highly scalable, fast, container management service that makes it
 *  easy to run, stop, and manage Docker containers on a cluster. You can host your cluster on a serverless infrastructure
 *  that is managed by Amazon ECS by launching your services or tasks on AWS Fargate. For more control, you can host your
 *  tasks on a cluster of Amazon Elastic Compute Cloud (Amazon EC2) instances that you
 * 
 *  manage>
 * 
 *  Amazon ECS makes it easy to launch and stop container-based applications with simple API calls, allows you to get the
 *  state of your cluster from a centralized service, and gives you access to many familiar Amazon EC2
 * 
 *  features>
 * 
 *  You can use Amazon ECS to schedule the placement of containers across your cluster based on your resource needs,
 *  isolation policies, and availability requirements. Amazon ECS eliminates the need for you to operate your own cluster
 *  management and configuration management systems or worry about scaling your management
 *
 * \sa EcsClient::updateCapacityProvider
 */

/*!
 * Constructs a UpdateCapacityProviderResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateCapacityProviderResponse::UpdateCapacityProviderResponse(
        const UpdateCapacityProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcsResponse(new UpdateCapacityProviderResponsePrivate(this), parent)
{
    setRequest(new UpdateCapacityProviderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateCapacityProviderRequest * UpdateCapacityProviderResponse::request() const
{
    Q_D(const UpdateCapacityProviderResponse);
    return static_cast<const UpdateCapacityProviderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ECS UpdateCapacityProvider \a response.
 */
void UpdateCapacityProviderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateCapacityProviderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ECS::UpdateCapacityProviderResponsePrivate
 * \brief The UpdateCapacityProviderResponsePrivate class provides private implementation for UpdateCapacityProviderResponse.
 * \internal
 *
 * \inmodule QtAwsECS
 */

/*!
 * Constructs a UpdateCapacityProviderResponsePrivate object with public implementation \a q.
 */
UpdateCapacityProviderResponsePrivate::UpdateCapacityProviderResponsePrivate(
    UpdateCapacityProviderResponse * const q) : EcsResponsePrivate(q)
{

}

/*!
 * Parses a ECS UpdateCapacityProvider response element from \a xml.
 */
void UpdateCapacityProviderResponsePrivate::parseUpdateCapacityProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateCapacityProviderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ECS
} // namespace QtAws
