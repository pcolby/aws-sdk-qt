// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchresponse.h"
#include "searchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::SearchResponse
 * \brief The SearchResponse class provides an interace for SageMaker Search responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::search
 */

/*!
 * Constructs a SearchResponse object for \a reply to \a request, with parent \a parent.
 */
SearchResponse::SearchResponse(
        const SearchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new SearchResponsePrivate(this), parent)
{
    setRequest(new SearchRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchRequest * SearchResponse::request() const
{
    Q_D(const SearchResponse);
    return static_cast<const SearchRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker Search \a response.
 */
void SearchResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::SearchResponsePrivate
 * \brief The SearchResponsePrivate class provides private implementation for SearchResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a SearchResponsePrivate object with public implementation \a q.
 */
SearchResponsePrivate::SearchResponsePrivate(
    SearchResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker Search response element from \a xml.
 */
void SearchResponsePrivate::parseSearchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
