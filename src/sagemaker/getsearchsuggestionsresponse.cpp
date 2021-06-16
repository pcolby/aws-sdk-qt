/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
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
