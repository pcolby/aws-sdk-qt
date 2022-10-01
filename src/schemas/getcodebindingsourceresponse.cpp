// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const GetCodeBindingSourceResponse);
    return static_cast<const GetCodeBindingSourceRequest *>(d->request);
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
