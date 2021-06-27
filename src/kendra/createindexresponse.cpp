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

#include "createindexresponse.h"
#include "createindexresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::CreateIndexResponse
 * \brief The CreateIndexResponse class provides an interace for kendra CreateIndex responses.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::createIndex
 */

/*!
 * Constructs a CreateIndexResponse object for \a reply to \a request, with parent \a parent.
 */
CreateIndexResponse::CreateIndexResponse(
        const CreateIndexRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : kendraResponse(new CreateIndexResponsePrivate(this), parent)
{
    setRequest(new CreateIndexRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateIndexRequest * CreateIndexResponse::request() const
{
    return static_cast<const CreateIndexRequest *>(kendraResponse::request());
}

/*!
 * \reimp
 * Parses a successful kendra CreateIndex \a response.
 */
void CreateIndexResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateIndexResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::kendra::CreateIndexResponsePrivate
 * \brief The CreateIndexResponsePrivate class provides private implementation for CreateIndexResponse.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a CreateIndexResponsePrivate object with public implementation \a q.
 */
CreateIndexResponsePrivate::CreateIndexResponsePrivate(
    CreateIndexResponse * const q) : kendraResponsePrivate(q)
{

}

/*!
 * Parses a kendra CreateIndex response element from \a xml.
 */
void CreateIndexResponsePrivate::parseCreateIndexResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateIndexResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace kendra
} // namespace QtAws
