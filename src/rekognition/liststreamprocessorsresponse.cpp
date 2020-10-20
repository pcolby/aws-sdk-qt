/*
    Copyright 2013-2020 Paul Colby

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

#include "liststreamprocessorsresponse.h"
#include "liststreamprocessorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::ListStreamProcessorsResponse
 * \brief The ListStreamProcessorsResponse class provides an interace for Rekognition ListStreamProcessors responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::listStreamProcessors
 */

/*!
 * Constructs a ListStreamProcessorsResponse object for \a reply to \a request, with parent \a parent.
 */
ListStreamProcessorsResponse::ListStreamProcessorsResponse(
        const ListStreamProcessorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new ListStreamProcessorsResponsePrivate(this), parent)
{
    setRequest(new ListStreamProcessorsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListStreamProcessorsRequest * ListStreamProcessorsResponse::request() const
{
    Q_D(const ListStreamProcessorsResponse);
    return static_cast<const ListStreamProcessorsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rekognition ListStreamProcessors \a response.
 */
void ListStreamProcessorsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListStreamProcessorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::ListStreamProcessorsResponsePrivate
 * \brief The ListStreamProcessorsResponsePrivate class provides private implementation for ListStreamProcessorsResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a ListStreamProcessorsResponsePrivate object with public implementation \a q.
 */
ListStreamProcessorsResponsePrivate::ListStreamProcessorsResponsePrivate(
    ListStreamProcessorsResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition ListStreamProcessors response element from \a xml.
 */
void ListStreamProcessorsResponsePrivate::parseListStreamProcessorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStreamProcessorsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
