// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createschemaresponse.h"
#include "createschemaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::CreateSchemaResponse
 * \brief The CreateSchemaResponse class provides an interace for Schemas CreateSchema responses.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::createSchema
 */

/*!
 * Constructs a CreateSchemaResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSchemaResponse::CreateSchemaResponse(
        const CreateSchemaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SchemasResponse(new CreateSchemaResponsePrivate(this), parent)
{
    setRequest(new CreateSchemaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSchemaRequest * CreateSchemaResponse::request() const
{
    Q_D(const CreateSchemaResponse);
    return static_cast<const CreateSchemaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Schemas CreateSchema \a response.
 */
void CreateSchemaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSchemaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Schemas::CreateSchemaResponsePrivate
 * \brief The CreateSchemaResponsePrivate class provides private implementation for CreateSchemaResponse.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a CreateSchemaResponsePrivate object with public implementation \a q.
 */
CreateSchemaResponsePrivate::CreateSchemaResponsePrivate(
    CreateSchemaResponse * const q) : SchemasResponsePrivate(q)
{

}

/*!
 * Parses a Schemas CreateSchema response element from \a xml.
 */
void CreateSchemaResponsePrivate::parseCreateSchemaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSchemaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Schemas
} // namespace QtAws
