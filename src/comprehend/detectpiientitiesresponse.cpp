// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "detectpiientitiesresponse.h"
#include "detectpiientitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DetectPiiEntitiesResponse
 * \brief The DetectPiiEntitiesResponse class provides an interace for Comprehend DetectPiiEntities responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::detectPiiEntities
 */

/*!
 * Constructs a DetectPiiEntitiesResponse object for \a reply to \a request, with parent \a parent.
 */
DetectPiiEntitiesResponse::DetectPiiEntitiesResponse(
        const DetectPiiEntitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new DetectPiiEntitiesResponsePrivate(this), parent)
{
    setRequest(new DetectPiiEntitiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DetectPiiEntitiesRequest * DetectPiiEntitiesResponse::request() const
{
    Q_D(const DetectPiiEntitiesResponse);
    return static_cast<const DetectPiiEntitiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend DetectPiiEntities \a response.
 */
void DetectPiiEntitiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DetectPiiEntitiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::DetectPiiEntitiesResponsePrivate
 * \brief The DetectPiiEntitiesResponsePrivate class provides private implementation for DetectPiiEntitiesResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DetectPiiEntitiesResponsePrivate object with public implementation \a q.
 */
DetectPiiEntitiesResponsePrivate::DetectPiiEntitiesResponsePrivate(
    DetectPiiEntitiesResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend DetectPiiEntities response element from \a xml.
 */
void DetectPiiEntitiesResponsePrivate::parseDetectPiiEntitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetectPiiEntitiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
