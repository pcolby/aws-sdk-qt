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
