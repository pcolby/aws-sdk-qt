// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getschemabydefinitionresponse.h"
#include "getschemabydefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetSchemaByDefinitionResponse
 * \brief The GetSchemaByDefinitionResponse class provides an interace for Glue GetSchemaByDefinition responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getSchemaByDefinition
 */

/*!
 * Constructs a GetSchemaByDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
GetSchemaByDefinitionResponse::GetSchemaByDefinitionResponse(
        const GetSchemaByDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetSchemaByDefinitionResponsePrivate(this), parent)
{
    setRequest(new GetSchemaByDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSchemaByDefinitionRequest * GetSchemaByDefinitionResponse::request() const
{
    Q_D(const GetSchemaByDefinitionResponse);
    return static_cast<const GetSchemaByDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetSchemaByDefinition \a response.
 */
void GetSchemaByDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSchemaByDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetSchemaByDefinitionResponsePrivate
 * \brief The GetSchemaByDefinitionResponsePrivate class provides private implementation for GetSchemaByDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetSchemaByDefinitionResponsePrivate object with public implementation \a q.
 */
GetSchemaByDefinitionResponsePrivate::GetSchemaByDefinitionResponsePrivate(
    GetSchemaByDefinitionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetSchemaByDefinition response element from \a xml.
 */
void GetSchemaByDefinitionResponsePrivate::parseGetSchemaByDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSchemaByDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
