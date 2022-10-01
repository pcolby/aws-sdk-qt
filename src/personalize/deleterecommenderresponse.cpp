// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterecommenderresponse.h"
#include "deleterecommenderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DeleteRecommenderResponse
 * \brief The DeleteRecommenderResponse class provides an interace for Personalize DeleteRecommender responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::deleteRecommender
 */

/*!
 * Constructs a DeleteRecommenderResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRecommenderResponse::DeleteRecommenderResponse(
        const DeleteRecommenderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new DeleteRecommenderResponsePrivate(this), parent)
{
    setRequest(new DeleteRecommenderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRecommenderRequest * DeleteRecommenderResponse::request() const
{
    Q_D(const DeleteRecommenderResponse);
    return static_cast<const DeleteRecommenderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize DeleteRecommender \a response.
 */
void DeleteRecommenderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRecommenderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::DeleteRecommenderResponsePrivate
 * \brief The DeleteRecommenderResponsePrivate class provides private implementation for DeleteRecommenderResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DeleteRecommenderResponsePrivate object with public implementation \a q.
 */
DeleteRecommenderResponsePrivate::DeleteRecommenderResponsePrivate(
    DeleteRecommenderResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize DeleteRecommender response element from \a xml.
 */
void DeleteRecommenderResponsePrivate::parseDeleteRecommenderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRecommenderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
