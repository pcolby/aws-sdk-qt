// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startrecommenderresponse.h"
#include "startrecommenderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::StartRecommenderResponse
 * \brief The StartRecommenderResponse class provides an interace for Personalize StartRecommender responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::startRecommender
 */

/*!
 * Constructs a StartRecommenderResponse object for \a reply to \a request, with parent \a parent.
 */
StartRecommenderResponse::StartRecommenderResponse(
        const StartRecommenderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new StartRecommenderResponsePrivate(this), parent)
{
    setRequest(new StartRecommenderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartRecommenderRequest * StartRecommenderResponse::request() const
{
    Q_D(const StartRecommenderResponse);
    return static_cast<const StartRecommenderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize StartRecommender \a response.
 */
void StartRecommenderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartRecommenderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::StartRecommenderResponsePrivate
 * \brief The StartRecommenderResponsePrivate class provides private implementation for StartRecommenderResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a StartRecommenderResponsePrivate object with public implementation \a q.
 */
StartRecommenderResponsePrivate::StartRecommenderResponsePrivate(
    StartRecommenderResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize StartRecommender response element from \a xml.
 */
void StartRecommenderResponsePrivate::parseStartRecommenderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartRecommenderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
