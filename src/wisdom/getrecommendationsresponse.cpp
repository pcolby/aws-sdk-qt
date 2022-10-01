// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrecommendationsresponse.h"
#include "getrecommendationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::GetRecommendationsResponse
 * \brief The GetRecommendationsResponse class provides an interace for Wisdom GetRecommendations responses.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::getRecommendations
 */

/*!
 * Constructs a GetRecommendationsResponse object for \a reply to \a request, with parent \a parent.
 */
GetRecommendationsResponse::GetRecommendationsResponse(
        const GetRecommendationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WisdomResponse(new GetRecommendationsResponsePrivate(this), parent)
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
 * Parses a successful Wisdom GetRecommendations \a response.
 */
void GetRecommendationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRecommendationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Wisdom::GetRecommendationsResponsePrivate
 * \brief The GetRecommendationsResponsePrivate class provides private implementation for GetRecommendationsResponse.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a GetRecommendationsResponsePrivate object with public implementation \a q.
 */
GetRecommendationsResponsePrivate::GetRecommendationsResponsePrivate(
    GetRecommendationsResponse * const q) : WisdomResponsePrivate(q)
{

}

/*!
 * Parses a Wisdom GetRecommendations response element from \a xml.
 */
void GetRecommendationsResponsePrivate::parseGetRecommendationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRecommendationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Wisdom
} // namespace QtAws
