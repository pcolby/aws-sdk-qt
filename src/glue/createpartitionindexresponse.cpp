// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
