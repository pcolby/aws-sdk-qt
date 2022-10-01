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

#include "querylineageresponse.h"
#include "querylineageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::QueryLineageResponse
 * \brief The QueryLineageResponse class provides an interace for SageMaker QueryLineage responses.
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
 * \sa SageMakerClient::queryLineage
 */

/*!
 * Constructs a QueryLineageResponse object for \a reply to \a request, with parent \a parent.
 */
QueryLineageResponse::QueryLineageResponse(
        const QueryLineageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new QueryLineageResponsePrivate(this), parent)
{
    setRequest(new QueryLineageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const QueryLineageRequest * QueryLineageResponse::request() const
{
    Q_D(const QueryLineageResponse);
    return static_cast<const QueryLineageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker QueryLineage \a response.
 */
void QueryLineageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(QueryLineageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::QueryLineageResponsePrivate
 * \brief The QueryLineageResponsePrivate class provides private implementation for QueryLineageResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a QueryLineageResponsePrivate object with public implementation \a q.
 */
QueryLineageResponsePrivate::QueryLineageResponsePrivate(
    QueryLineageResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker QueryLineage response element from \a xml.
 */
void QueryLineageResponsePrivate::parseQueryLineageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("QueryLineageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
