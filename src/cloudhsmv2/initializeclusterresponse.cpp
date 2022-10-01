// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
