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

#include "listartifactsresponse.h"
#include "listartifactsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListArtifactsResponse
 * \brief The ListArtifactsResponse class provides an interace for SageMaker ListArtifacts responses.
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
 * \sa SageMakerClient::listArtifacts
 */

/*!
 * Constructs a ListArtifactsResponse object for \a reply to \a request, with parent \a parent.
 */
ListArtifactsResponse::ListArtifactsResponse(
        const ListArtifactsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListArtifactsResponsePrivate(this), parent)
{
    setRequest(new ListArtifactsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListArtifactsRequest * ListArtifactsResponse::request() const
{
    Q_D(const ListArtifactsResponse);
    return static_cast<const ListArtifactsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListArtifacts \a response.
 */
void ListArtifactsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListArtifactsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListArtifactsResponsePrivate
 * \brief The ListArtifactsResponsePrivate class provides private implementation for ListArtifactsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListArtifactsResponsePrivate object with public implementation \a q.
 */
ListArtifactsResponsePrivate::ListArtifactsResponsePrivate(
    ListArtifactsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListArtifacts response element from \a xml.
 */
void ListArtifactsResponsePrivate::parseListArtifactsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListArtifactsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
