// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listrecommendersresponse.h"
#include "listrecommendersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListRecommendersResponse
 * \brief The ListRecommendersResponse class provides an interace for Personalize ListRecommenders responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listRecommenders
 */

/*!
 * Constructs a ListRecommendersResponse object for \a reply to \a request, with parent \a parent.
 */
ListRecommendersResponse::ListRecommendersResponse(
        const ListRecommendersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new ListRecommendersResponsePrivate(this), parent)
{
    setRequest(new ListRecommendersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRecommendersRequest * ListRecommendersResponse::request() const
{
    Q_D(const ListRecommendersResponse);
    return static_cast<const ListRecommendersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize ListRecommenders \a response.
 */
void ListRecommendersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRecommendersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::ListRecommendersResponsePrivate
 * \brief The ListRecommendersResponsePrivate class provides private implementation for ListRecommendersResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListRecommendersResponsePrivate object with public implementation \a q.
 */
ListRecommendersResponsePrivate::ListRecommendersResponsePrivate(
    ListRecommendersResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize ListRecommenders response element from \a xml.
 */
void ListRecommendersResponsePrivate::parseListRecommendersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRecommendersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
