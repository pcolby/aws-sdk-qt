// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putcodebindingresponse.h"
#include "putcodebindingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::PutCodeBindingResponse
 * \brief The PutCodeBindingResponse class provides an interace for Schemas PutCodeBinding responses.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::putCodeBinding
 */

/*!
 * Constructs a PutCodeBindingResponse object for \a reply to \a request, with parent \a parent.
 */
PutCodeBindingResponse::PutCodeBindingResponse(
        const PutCodeBindingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SchemasResponse(new PutCodeBindingResponsePrivate(this), parent)
{
    setRequest(new PutCodeBindingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutCodeBindingRequest * PutCodeBindingResponse::request() const
{
    Q_D(const PutCodeBindingResponse);
    return static_cast<const PutCodeBindingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Schemas PutCodeBinding \a response.
 */
void PutCodeBindingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutCodeBindingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Schemas::PutCodeBindingResponsePrivate
 * \brief The PutCodeBindingResponsePrivate class provides private implementation for PutCodeBindingResponse.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a PutCodeBindingResponsePrivate object with public implementation \a q.
 */
PutCodeBindingResponsePrivate::PutCodeBindingResponsePrivate(
    PutCodeBindingResponse * const q) : SchemasResponsePrivate(q)
{

}

/*!
 * Parses a Schemas PutCodeBinding response element from \a xml.
 */
void PutCodeBindingResponsePrivate::parsePutCodeBindingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutCodeBindingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Schemas
} // namespace QtAws
