// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsearchsuggestionsresponse.h"
#include "getsearchsuggestionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::GetSearchSuggestionsResponse
 * \brief The GetSearchSuggestionsResponse class provides an interace for SageMaker GetSearchSuggestions responses.
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
 * \sa SageMakerClient::getSearchSuggestions
 */

/*!
 * Constructs a GetSearchSuggestionsResponse object for \a reply to \a request, with parent \a parent.
 */
GetSearchSuggestionsResponse::GetSearchSuggestionsResponse(
        const GetSearchSuggestionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new GetSearchSuggestionsResponsePrivate(this), parent)
{
    setRequest(new GetSearchSuggestionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSearchSuggestionsRequest * GetSearchSuggestionsResponse::request() const
{
    Q_D(const GetSearchSuggestionsResponse);
    return static_cast<const GetSearchSuggestionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker GetSearchSuggestions \a response.
 */
void GetSearchSuggestionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSearchSuggestionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::GetSearchSuggestionsResponsePrivate
 * \brief The GetSearchSuggestionsResponsePrivate class provides private implementation for GetSearchSuggestionsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a GetSearchSuggestionsResponsePrivate object with public implementation \a q.
 */
GetSearchSuggestionsResponsePrivate::GetSearchSuggestionsResponsePrivate(
    GetSearchSuggestionsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker GetSearchSuggestions response element from \a xml.
 */
void GetSearchSuggestionsResponsePrivate::parseGetSearchSuggestionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSearchSuggestionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
