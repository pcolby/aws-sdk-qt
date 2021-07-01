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

#include "listimageversionsresponse.h"
#include "listimageversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListImageVersionsResponse
 * \brief The ListImageVersionsResponse class provides an interace for SageMaker ListImageVersions responses.
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
 * \sa SageMakerClient::listImageVersions
 */

/*!
 * Constructs a ListImageVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListImageVersionsResponse::ListImageVersionsResponse(
        const ListImageVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListImageVersionsResponsePrivate(this), parent)
{
    setRequest(new ListImageVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListImageVersionsRequest * ListImageVersionsResponse::request() const
{
    Q_D(const ListImageVersionsResponse);
    return static_cast<const ListImageVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListImageVersions \a response.
 */
void ListImageVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListImageVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListImageVersionsResponsePrivate
 * \brief The ListImageVersionsResponsePrivate class provides private implementation for ListImageVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListImageVersionsResponsePrivate object with public implementation \a q.
 */
ListImageVersionsResponsePrivate::ListImageVersionsResponsePrivate(
    ListImageVersionsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListImageVersions response element from \a xml.
 */
void ListImageVersionsResponsePrivate::parseListImageVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListImageVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
