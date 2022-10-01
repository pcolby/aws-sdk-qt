// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "detectentitiesresponse.h"
#include "detectentitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DetectEntitiesResponse
 * \brief The DetectEntitiesResponse class provides an interace for Comprehend DetectEntities responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::detectEntities
 */

/*!
 * Constructs a DetectEntitiesResponse object for \a reply to \a request, with parent \a parent.
 */
DetectEntitiesResponse::DetectEntitiesResponse(
        const DetectEntitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new DetectEntitiesResponsePrivate(this), parent)
{
    setRequest(new DetectEntitiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DetectEntitiesRequest * DetectEntitiesResponse::request() const
{
    Q_D(const DetectEntitiesResponse);
    return static_cast<const DetectEntitiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend DetectEntities \a response.
 */
void DetectEntitiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DetectEntitiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::DetectEntitiesResponsePrivate
 * \brief The DetectEntitiesResponsePrivate class provides private implementation for DetectEntitiesResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DetectEntitiesResponsePrivate object with public implementation \a q.
 */
DetectEntitiesResponsePrivate::DetectEntitiesResponsePrivate(
    DetectEntitiesResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend DetectEntities response element from \a xml.
 */
void DetectEntitiesResponsePrivate::parseDetectEntitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetectEntitiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
