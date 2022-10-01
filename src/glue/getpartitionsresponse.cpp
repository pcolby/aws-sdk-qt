// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getpartitionsresponse.h"
#include "getpartitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetPartitionsResponse
 * \brief The GetPartitionsResponse class provides an interace for Glue GetPartitions responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getPartitions
 */

/*!
 * Constructs a GetPartitionsResponse object for \a reply to \a request, with parent \a parent.
 */
GetPartitionsResponse::GetPartitionsResponse(
        const GetPartitionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetPartitionsResponsePrivate(this), parent)
{
    setRequest(new GetPartitionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPartitionsRequest * GetPartitionsResponse::request() const
{
    Q_D(const GetPartitionsResponse);
    return static_cast<const GetPartitionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetPartitions \a response.
 */
void GetPartitionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetPartitionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetPartitionsResponsePrivate
 * \brief The GetPartitionsResponsePrivate class provides private implementation for GetPartitionsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetPartitionsResponsePrivate object with public implementation \a q.
 */
GetPartitionsResponsePrivate::GetPartitionsResponsePrivate(
    GetPartitionsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetPartitions response element from \a xml.
 */
void GetPartitionsResponsePrivate::parseGetPartitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPartitionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
