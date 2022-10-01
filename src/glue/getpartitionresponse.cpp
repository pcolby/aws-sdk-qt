// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getpartitionresponse.h"
#include "getpartitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetPartitionResponse
 * \brief The GetPartitionResponse class provides an interace for Glue GetPartition responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getPartition
 */

/*!
 * Constructs a GetPartitionResponse object for \a reply to \a request, with parent \a parent.
 */
GetPartitionResponse::GetPartitionResponse(
        const GetPartitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetPartitionResponsePrivate(this), parent)
{
    setRequest(new GetPartitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPartitionRequest * GetPartitionResponse::request() const
{
    Q_D(const GetPartitionResponse);
    return static_cast<const GetPartitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetPartition \a response.
 */
void GetPartitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetPartitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetPartitionResponsePrivate
 * \brief The GetPartitionResponsePrivate class provides private implementation for GetPartitionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetPartitionResponsePrivate object with public implementation \a q.
 */
GetPartitionResponsePrivate::GetPartitionResponsePrivate(
    GetPartitionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetPartition response element from \a xml.
 */
void GetPartitionResponsePrivate::parseGetPartitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPartitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
