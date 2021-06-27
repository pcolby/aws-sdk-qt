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

#include "getcodebindingsourceresponse.h"
#include "getcodebindingsourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::GetCodeBindingSourceResponse
 * \brief The GetCodeBindingSourceResponse class provides an interace for Schemas GetCodeBindingSource responses.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::getCodeBindingSource
 */

/*!
 * Constructs a GetCodeBindingSourceResponse object for \a reply to \a request, with parent \a parent.
 */
GetCodeBindingSourceResponse::GetCodeBindingSourceResponse(
        const GetCodeBindingSourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SchemasResponse(new GetCodeBindingSourceResponsePrivate(this), parent)
{
    setRequest(new GetCodeBindingSourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCodeBindingSourceRequest * GetCodeBindingSourceResponse::request() const
{
    return static_cast<const GetCodeBindingSourceRequest *>(SchemasResponse::request());
}

/*!
 * \reimp
 * Parses a successful Schemas GetCodeBindingSource \a response.
 */
void GetCodeBindingSourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCodeBindingSourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Schemas::GetCodeBindingSourceResponsePrivate
 * \brief The GetCodeBindingSourceResponsePrivate class provides private implementation for GetCodeBindingSourceResponse.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a GetCodeBindingSourceResponsePrivate object with public implementation \a q.
 */
GetCodeBindingSourceResponsePrivate::GetCodeBindingSourceResponsePrivate(
    GetCodeBindingSourceResponse * const q) : SchemasResponsePrivate(q)
{

}

/*!
 * Parses a Schemas GetCodeBindingSource response element from \a xml.
 */
void GetCodeBindingSourceResponsePrivate::parseGetCodeBindingSourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCodeBindingSourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Schemas
} // namespace QtAws
