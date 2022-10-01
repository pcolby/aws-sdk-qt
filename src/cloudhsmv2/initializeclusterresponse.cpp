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

#include "initializeclusterresponse.h"
#include "initializeclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHsmV2 {

/*!
 * \class QtAws::CloudHsmV2::InitializeClusterResponse
 * \brief The InitializeClusterResponse class provides an interace for CloudHsmV2 InitializeCluster responses.
 *
 * \inmodule QtAwsCloudHsmV2
 *
 *  For more information about AWS CloudHSM, see <a href="http://aws.amazon.com/cloudhsm/">AWS CloudHSM</a> and the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
 *
 * \sa CloudHsmV2Client::initializeCluster
 */

/*!
 * Constructs a InitializeClusterResponse object for \a reply to \a request, with parent \a parent.
 */
InitializeClusterResponse::InitializeClusterResponse(
        const InitializeClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHsmV2Response(new InitializeClusterResponsePrivate(this), parent)
{
    setRequest(new InitializeClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const InitializeClusterRequest * InitializeClusterResponse::request() const
{
    Q_D(const InitializeClusterResponse);
    return static_cast<const InitializeClusterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudHsmV2 InitializeCluster \a response.
 */
void InitializeClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(InitializeClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudHsmV2::InitializeClusterResponsePrivate
 * \brief The InitializeClusterResponsePrivate class provides private implementation for InitializeClusterResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHsmV2
 */

/*!
 * Constructs a InitializeClusterResponsePrivate object with public implementation \a q.
 */
InitializeClusterResponsePrivate::InitializeClusterResponsePrivate(
    InitializeClusterResponse * const q) : CloudHsmV2ResponsePrivate(q)
{

}

/*!
 * Parses a CloudHsmV2 InitializeCluster response element from \a xml.
 */
void InitializeClusterResponsePrivate::parseInitializeClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("InitializeClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudHsmV2
} // namespace QtAws
