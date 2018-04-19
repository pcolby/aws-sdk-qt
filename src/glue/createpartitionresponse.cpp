/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createpartitionresponse.h"
#include "createpartitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreatePartitionResponse
 * \brief The CreatePartitionResponse class provides an interace for Glue CreatePartition responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::createPartition
 */

/*!
 * Constructs a CreatePartitionResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePartitionResponse::CreatePartitionResponse(
        const CreatePartitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CreatePartitionResponsePrivate(this), parent)
{
    setRequest(new CreatePartitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePartitionRequest * CreatePartitionResponse::request() const
{
    Q_D(const CreatePartitionResponse);
    return static_cast<const CreatePartitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue CreatePartition \a response.
 */
void CreatePartitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreatePartitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::CreatePartitionResponsePrivate
 * \brief The CreatePartitionResponsePrivate class provides private implementation for CreatePartitionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreatePartitionResponsePrivate object with public implementation \a q.
 */
CreatePartitionResponsePrivate::CreatePartitionResponsePrivate(
    CreatePartitionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue CreatePartition response element from \a xml.
 */
void CreatePartitionResponsePrivate::parseCreatePartitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePartitionResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
