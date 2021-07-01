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

#include "containspiientitiesresponse.h"
#include "containspiientitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ContainsPiiEntitiesResponse
 * \brief The ContainsPiiEntitiesResponse class provides an interace for Comprehend ContainsPiiEntities responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::containsPiiEntities
 */

/*!
 * Constructs a ContainsPiiEntitiesResponse object for \a reply to \a request, with parent \a parent.
 */
ContainsPiiEntitiesResponse::ContainsPiiEntitiesResponse(
        const ContainsPiiEntitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new ContainsPiiEntitiesResponsePrivate(this), parent)
{
    setRequest(new ContainsPiiEntitiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ContainsPiiEntitiesRequest * ContainsPiiEntitiesResponse::request() const
{
    Q_D(const ContainsPiiEntitiesResponse);
    return static_cast<const ContainsPiiEntitiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend ContainsPiiEntities \a response.
 */
void ContainsPiiEntitiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ContainsPiiEntitiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::ContainsPiiEntitiesResponsePrivate
 * \brief The ContainsPiiEntitiesResponsePrivate class provides private implementation for ContainsPiiEntitiesResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ContainsPiiEntitiesResponsePrivate object with public implementation \a q.
 */
ContainsPiiEntitiesResponsePrivate::ContainsPiiEntitiesResponsePrivate(
    ContainsPiiEntitiesResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend ContainsPiiEntities response element from \a xml.
 */
void ContainsPiiEntitiesResponsePrivate::parseContainsPiiEntitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ContainsPiiEntitiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
