// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrecommenderconfigurationsresponse.h"
#include "getrecommenderconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetRecommenderConfigurationsResponse
 * \brief The GetRecommenderConfigurationsResponse class provides an interace for Pinpoint GetRecommenderConfigurations responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getRecommenderConfigurations
 */

/*!
 * Constructs a GetRecommenderConfigurationsResponse object for \a reply to \a request, with parent \a parent.
 */
GetRecommenderConfigurationsResponse::GetRecommenderConfigurationsResponse(
        const GetRecommenderConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetRecommenderConfigurationsResponsePrivate(this), parent)
{
    setRequest(new GetRecommenderConfigurationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRecommenderConfigurationsRequest * GetRecommenderConfigurationsResponse::request() const
{
    Q_D(const GetRecommenderConfigurationsResponse);
    return static_cast<const GetRecommenderConfigurationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetRecommenderConfigurations \a response.
 */
void GetRecommenderConfigurationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRecommenderConfigurationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetRecommenderConfigurationsResponsePrivate
 * \brief The GetRecommenderConfigurationsResponsePrivate class provides private implementation for GetRecommenderConfigurationsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetRecommenderConfigurationsResponsePrivate object with public implementation \a q.
 */
GetRecommenderConfigurationsResponsePrivate::GetRecommenderConfigurationsResponsePrivate(
    GetRecommenderConfigurationsResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetRecommenderConfigurations response element from \a xml.
 */
void GetRecommenderConfigurationsResponsePrivate::parseGetRecommenderConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRecommenderConfigurationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
