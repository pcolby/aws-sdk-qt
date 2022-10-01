// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettableversionresponse.h"
#include "gettableversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetTableVersionResponse
 * \brief The GetTableVersionResponse class provides an interace for Glue GetTableVersion responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getTableVersion
 */

/*!
 * Constructs a GetTableVersionResponse object for \a reply to \a request, with parent \a parent.
 */
GetTableVersionResponse::GetTableVersionResponse(
        const GetTableVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetTableVersionResponsePrivate(this), parent)
{
    setRequest(new GetTableVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTableVersionRequest * GetTableVersionResponse::request() const
{
    Q_D(const GetTableVersionResponse);
    return static_cast<const GetTableVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetTableVersion \a response.
 */
void GetTableVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTableVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetTableVersionResponsePrivate
 * \brief The GetTableVersionResponsePrivate class provides private implementation for GetTableVersionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetTableVersionResponsePrivate object with public implementation \a q.
 */
GetTableVersionResponsePrivate::GetTableVersionResponsePrivate(
    GetTableVersionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetTableVersion response element from \a xml.
 */
void GetTableVersionResponsePrivate::parseGetTableVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTableVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
