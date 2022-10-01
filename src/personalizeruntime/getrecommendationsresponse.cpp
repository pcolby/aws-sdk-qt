// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrecommendationsresponse.h"
#include "getrecommendationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PersonalizeRuntime {

/*!
 * \class QtAws::PersonalizeRuntime::GetRecommendationsResponse
 * \brief The GetRecommendationsResponse class provides an interace for PersonalizeRuntime GetRecommendations responses.
 *
 * \inmodule QtAwsPersonalizeRuntime
 *
 *
 * \sa PersonalizeRuntimeClient::getRecommendations
 */

/*!
 * Constructs a GetRecommendationsResponse object for \a reply to \a request, with parent \a parent.
 */
GetRecommendationsResponse::GetRecommendationsResponse(
        const GetRecommendationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeRuntimeResponse(new GetRecommendationsResponsePrivate(this), parent)
{
    setRequest(new GetRecommendationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRecommendationsRequest * GetRecommendationsResponse::request() const
{
    Q_D(const GetRecommendationsResponse);
    return static_cast<const GetRecommendationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PersonalizeRuntime GetRecommendations \a response.
 */
void GetRecommendationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRecommendationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PersonalizeRuntime::GetRecommendationsResponsePrivate
 * \brief The GetRecommendationsResponsePrivate class provides private implementation for GetRecommendationsResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalizeRuntime
 */

/*!
 * Constructs a GetRecommendationsResponsePrivate object with public implementation \a q.
 */
GetRecommendationsResponsePrivate::GetRecommendationsResponsePrivate(
    GetRecommendationsResponse * const q) : PersonalizeRuntimeResponsePrivate(q)
{

}

/*!
 * Parses a PersonalizeRuntime GetRecommendations response element from \a xml.
 */
void GetRecommendationsResponsePrivate::parseGetRecommendationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRecommendationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PersonalizeRuntime
} // namespace QtAws
