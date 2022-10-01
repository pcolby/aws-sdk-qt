// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "registerschemaversionresponse.h"
#include "registerschemaversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::RegisterSchemaVersionResponse
 * \brief The RegisterSchemaVersionResponse class provides an interace for Glue RegisterSchemaVersion responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::registerSchemaVersion
 */

/*!
 * Constructs a RegisterSchemaVersionResponse object for \a reply to \a request, with parent \a parent.
 */
RegisterSchemaVersionResponse::RegisterSchemaVersionResponse(
        const RegisterSchemaVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new RegisterSchemaVersionResponsePrivate(this), parent)
{
    setRequest(new RegisterSchemaVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RegisterSchemaVersionRequest * RegisterSchemaVersionResponse::request() const
{
    Q_D(const RegisterSchemaVersionResponse);
    return static_cast<const RegisterSchemaVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue RegisterSchemaVersion \a response.
 */
void RegisterSchemaVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RegisterSchemaVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::RegisterSchemaVersionResponsePrivate
 * \brief The RegisterSchemaVersionResponsePrivate class provides private implementation for RegisterSchemaVersionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a RegisterSchemaVersionResponsePrivate object with public implementation \a q.
 */
RegisterSchemaVersionResponsePrivate::RegisterSchemaVersionResponsePrivate(
    RegisterSchemaVersionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue RegisterSchemaVersion response element from \a xml.
 */
void RegisterSchemaVersionResponsePrivate::parseRegisterSchemaVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterSchemaVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
