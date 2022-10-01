// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
