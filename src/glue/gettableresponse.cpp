// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettableresponse.h"
#include "gettableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetTableResponse
 * \brief The GetTableResponse class provides an interace for Glue GetTable responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getTable
 */

/*!
 * Constructs a GetTableResponse object for \a reply to \a request, with parent \a parent.
 */
GetTableResponse::GetTableResponse(
        const GetTableRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetTableResponsePrivate(this), parent)
{
    setRequest(new GetTableRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTableRequest * GetTableResponse::request() const
{
    Q_D(const GetTableResponse);
    return static_cast<const GetTableRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetTable \a response.
 */
void GetTableResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTableResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetTableResponsePrivate
 * \brief The GetTableResponsePrivate class provides private implementation for GetTableResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetTableResponsePrivate object with public implementation \a q.
 */
GetTableResponsePrivate::GetTableResponsePrivate(
    GetTableResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetTable response element from \a xml.
 */
void GetTableResponsePrivate::parseGetTableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTableResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
