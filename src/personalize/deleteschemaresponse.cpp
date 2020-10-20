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

#include "deleteschemaresponse.h"
#include "deleteschemaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DeleteSchemaResponse
 * \brief The DeleteSchemaResponse class provides an interace for Personalize DeleteSchema responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::deleteSchema
 */

/*!
 * Constructs a DeleteSchemaResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSchemaResponse::DeleteSchemaResponse(
        const DeleteSchemaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new DeleteSchemaResponsePrivate(this), parent)
{
    setRequest(new DeleteSchemaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSchemaRequest * DeleteSchemaResponse::request() const
{
    Q_D(const DeleteSchemaResponse);
    return static_cast<const DeleteSchemaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize DeleteSchema \a response.
 */
void DeleteSchemaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSchemaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::DeleteSchemaResponsePrivate
 * \brief The DeleteSchemaResponsePrivate class provides private implementation for DeleteSchemaResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DeleteSchemaResponsePrivate object with public implementation \a q.
 */
DeleteSchemaResponsePrivate::DeleteSchemaResponsePrivate(
    DeleteSchemaResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize DeleteSchema response element from \a xml.
 */
void DeleteSchemaResponsePrivate::parseDeleteSchemaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSchemaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
