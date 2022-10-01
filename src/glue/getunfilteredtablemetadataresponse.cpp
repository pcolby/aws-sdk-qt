// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getunfilteredtablemetadataresponse.h"
#include "getunfilteredtablemetadataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetUnfilteredTableMetadataResponse
 * \brief The GetUnfilteredTableMetadataResponse class provides an interace for Glue GetUnfilteredTableMetadata responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getUnfilteredTableMetadata
 */

/*!
 * Constructs a GetUnfilteredTableMetadataResponse object for \a reply to \a request, with parent \a parent.
 */
GetUnfilteredTableMetadataResponse::GetUnfilteredTableMetadataResponse(
        const GetUnfilteredTableMetadataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetUnfilteredTableMetadataResponsePrivate(this), parent)
{
    setRequest(new GetUnfilteredTableMetadataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUnfilteredTableMetadataRequest * GetUnfilteredTableMetadataResponse::request() const
{
    Q_D(const GetUnfilteredTableMetadataResponse);
    return static_cast<const GetUnfilteredTableMetadataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetUnfilteredTableMetadata \a response.
 */
void GetUnfilteredTableMetadataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUnfilteredTableMetadataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetUnfilteredTableMetadataResponsePrivate
 * \brief The GetUnfilteredTableMetadataResponsePrivate class provides private implementation for GetUnfilteredTableMetadataResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetUnfilteredTableMetadataResponsePrivate object with public implementation \a q.
 */
GetUnfilteredTableMetadataResponsePrivate::GetUnfilteredTableMetadataResponsePrivate(
    GetUnfilteredTableMetadataResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetUnfilteredTableMetadata response element from \a xml.
 */
void GetUnfilteredTableMetadataResponsePrivate::parseGetUnfilteredTableMetadataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUnfilteredTableMetadataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
