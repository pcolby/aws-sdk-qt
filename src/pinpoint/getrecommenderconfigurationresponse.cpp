// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrecommenderconfigurationresponse.h"
#include "getrecommenderconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetRecommenderConfigurationResponse
 * \brief The GetRecommenderConfigurationResponse class provides an interace for Pinpoint GetRecommenderConfiguration responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getRecommenderConfiguration
 */

/*!
 * Constructs a GetRecommenderConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetRecommenderConfigurationResponse::GetRecommenderConfigurationResponse(
        const GetRecommenderConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetRecommenderConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetRecommenderConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRecommenderConfigurationRequest * GetRecommenderConfigurationResponse::request() const
{
    Q_D(const GetRecommenderConfigurationResponse);
    return static_cast<const GetRecommenderConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetRecommenderConfiguration \a response.
 */
void GetRecommenderConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRecommenderConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetRecommenderConfigurationResponsePrivate
 * \brief The GetRecommenderConfigurationResponsePrivate class provides private implementation for GetRecommenderConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetRecommenderConfigurationResponsePrivate object with public implementation \a q.
 */
GetRecommenderConfigurationResponsePrivate::GetRecommenderConfigurationResponsePrivate(
    GetRecommenderConfigurationResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetRecommenderConfiguration response element from \a xml.
 */
void GetRecommenderConfigurationResponsePrivate::parseGetRecommenderConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRecommenderConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
