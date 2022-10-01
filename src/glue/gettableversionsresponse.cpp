// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettableversionsresponse.h"
#include "gettableversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetTableVersionsResponse
 * \brief The GetTableVersionsResponse class provides an interace for Glue GetTableVersions responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getTableVersions
 */

/*!
 * Constructs a GetTableVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
GetTableVersionsResponse::GetTableVersionsResponse(
        const GetTableVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetTableVersionsResponsePrivate(this), parent)
{
    setRequest(new GetTableVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTableVersionsRequest * GetTableVersionsResponse::request() const
{
    Q_D(const GetTableVersionsResponse);
    return static_cast<const GetTableVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetTableVersions \a response.
 */
void GetTableVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTableVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetTableVersionsResponsePrivate
 * \brief The GetTableVersionsResponsePrivate class provides private implementation for GetTableVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetTableVersionsResponsePrivate object with public implementation \a q.
 */
GetTableVersionsResponsePrivate::GetTableVersionsResponsePrivate(
    GetTableVersionsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetTableVersions response element from \a xml.
 */
void GetTableVersionsResponsePrivate::parseGetTableVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTableVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
