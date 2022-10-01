// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdeploymentsresponse.h"
#include "getdeploymentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SagemakerEdge {

/*!
 * \class QtAws::SagemakerEdge::GetDeploymentsResponse
 * \brief The GetDeploymentsResponse class provides an interace for SagemakerEdge GetDeployments responses.
 *
 * \inmodule QtAwsSagemakerEdge
 *
 *  SageMaker Edge Manager dataplane service for communicating with active
 *
 * \sa SagemakerEdgeClient::getDeployments
 */

/*!
 * Constructs a GetDeploymentsResponse object for \a reply to \a request, with parent \a parent.
 */
GetDeploymentsResponse::GetDeploymentsResponse(
        const GetDeploymentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SagemakerEdgeResponse(new GetDeploymentsResponsePrivate(this), parent)
{
    setRequest(new GetDeploymentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDeploymentsRequest * GetDeploymentsResponse::request() const
{
    Q_D(const GetDeploymentsResponse);
    return static_cast<const GetDeploymentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SagemakerEdge GetDeployments \a response.
 */
void GetDeploymentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDeploymentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SagemakerEdge::GetDeploymentsResponsePrivate
 * \brief The GetDeploymentsResponsePrivate class provides private implementation for GetDeploymentsResponse.
 * \internal
 *
 * \inmodule QtAwsSagemakerEdge
 */

/*!
 * Constructs a GetDeploymentsResponsePrivate object with public implementation \a q.
 */
GetDeploymentsResponsePrivate::GetDeploymentsResponsePrivate(
    GetDeploymentsResponse * const q) : SagemakerEdgeResponsePrivate(q)
{

}

/*!
 * Parses a SagemakerEdge GetDeployments response element from \a xml.
 */
void GetDeploymentsResponsePrivate::parseGetDeploymentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDeploymentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SagemakerEdge
} // namespace QtAws
