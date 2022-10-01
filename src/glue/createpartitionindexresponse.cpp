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

#include "createpartitionindexresponse.h"
#include "createpartitionindexresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreatePartitionIndexResponse
 * \brief The CreatePartitionIndexResponse class provides an interace for Glue CreatePartitionIndex responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::createPartitionIndex
 */

/*!
 * Constructs a CreatePartitionIndexResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePartitionIndexResponse::CreatePartitionIndexResponse(
        const CreatePartitionIndexRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CreatePartitionIndexResponsePrivate(this), parent)
{
    setRequest(new CreatePartitionIndexRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePartitionIndexRequest * CreatePartitionIndexResponse::request() const
{
    Q_D(const CreatePartitionIndexResponse);
    return static_cast<const CreatePartitionIndexRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue CreatePartitionIndex \a response.
 */
void CreatePartitionIndexResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePartitionIndexResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::CreatePartitionIndexResponsePrivate
 * \brief The CreatePartitionIndexResponsePrivate class provides private implementation for CreatePartitionIndexResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreatePartitionIndexResponsePrivate object with public implementation \a q.
 */
CreatePartitionIndexResponsePrivate::CreatePartitionIndexResponsePrivate(
    CreatePartitionIndexResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue CreatePartitionIndex response element from \a xml.
 */
void CreatePartitionIndexResponsePrivate::parseCreatePartitionIndexResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePartitionIndexResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
