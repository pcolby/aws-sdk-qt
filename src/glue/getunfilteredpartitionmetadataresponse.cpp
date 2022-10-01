// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getunfilteredpartitionmetadataresponse.h"
#include "getunfilteredpartitionmetadataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetUnfilteredPartitionMetadataResponse
 * \brief The GetUnfilteredPartitionMetadataResponse class provides an interace for Glue GetUnfilteredPartitionMetadata responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getUnfilteredPartitionMetadata
 */

/*!
 * Constructs a GetUnfilteredPartitionMetadataResponse object for \a reply to \a request, with parent \a parent.
 */
GetUnfilteredPartitionMetadataResponse::GetUnfilteredPartitionMetadataResponse(
        const GetUnfilteredPartitionMetadataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetUnfilteredPartitionMetadataResponsePrivate(this), parent)
{
    setRequest(new GetUnfilteredPartitionMetadataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUnfilteredPartitionMetadataRequest * GetUnfilteredPartitionMetadataResponse::request() const
{
    Q_D(const GetUnfilteredPartitionMetadataResponse);
    return static_cast<const GetUnfilteredPartitionMetadataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetUnfilteredPartitionMetadata \a response.
 */
void GetUnfilteredPartitionMetadataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUnfilteredPartitionMetadataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetUnfilteredPartitionMetadataResponsePrivate
 * \brief The GetUnfilteredPartitionMetadataResponsePrivate class provides private implementation for GetUnfilteredPartitionMetadataResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetUnfilteredPartitionMetadataResponsePrivate object with public implementation \a q.
 */
GetUnfilteredPartitionMetadataResponsePrivate::GetUnfilteredPartitionMetadataResponsePrivate(
    GetUnfilteredPartitionMetadataResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetUnfilteredPartitionMetadata response element from \a xml.
 */
void GetUnfilteredPartitionMetadataResponsePrivate::parseGetUnfilteredPartitionMetadataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUnfilteredPartitionMetadataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
