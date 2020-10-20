/*
    Copyright 2013-2020 Paul Colby

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

#include "createclusterresponse.h"
#include "createclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHSMV2 {

/*!
 * \class QtAws::CloudHSMV2::CreateClusterResponse
 * \brief The CreateClusterResponse class provides an interace for CloudHSMV2 CreateCluster responses.
 *
 * \inmodule QtAwsCloudHSMV2
 *
 *  For more information about AWS CloudHSM, see <a href="http://aws.amazon.com/cloudhsm/">AWS CloudHSM</a> and the <a
 *  href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
 *
 * \sa CloudHSMV2Client::createCluster
 */

/*!
 * Constructs a CreateClusterResponse object for \a reply to \a request, with parent \a parent.
 */
CreateClusterResponse::CreateClusterResponse(
        const CreateClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMV2Response(new CreateClusterResponsePrivate(this), parent)
{
    setRequest(new CreateClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateClusterRequest * CreateClusterResponse::request() const
{
    Q_D(const CreateClusterResponse);
    return static_cast<const CreateClusterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudHSMV2 CreateCluster \a response.
 */
void CreateClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudHSMV2::CreateClusterResponsePrivate
 * \brief The CreateClusterResponsePrivate class provides private implementation for CreateClusterResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHSMV2
 */

/*!
 * Constructs a CreateClusterResponsePrivate object with public implementation \a q.
 */
CreateClusterResponsePrivate::CreateClusterResponsePrivate(
    CreateClusterResponse * const q) : CloudHSMV2ResponsePrivate(q)
{

}

/*!
 * Parses a CloudHSMV2 CreateCluster response element from \a xml.
 */
void CreateClusterResponsePrivate::parseCreateClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudHSMV2
} // namespace QtAws
