// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
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
    //Q_D(CreatePartitionResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
