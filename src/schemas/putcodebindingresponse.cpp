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
    return static_cast<const PutCodeBindingRequest *>(SchemasResponse::request());
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
