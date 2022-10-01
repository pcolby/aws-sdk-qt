// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmappingresponse.h"
#include "getmappingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetMappingResponse
 * \brief The GetMappingResponse class provides an interace for Glue GetMapping responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getMapping
 */

/*!
 * Constructs a GetMappingResponse object for \a reply to \a request, with parent \a parent.
 */
GetMappingResponse::GetMappingResponse(
        const GetMappingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetMappingResponsePrivate(this), parent)
{
    setRequest(new GetMappingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMappingRequest * GetMappingResponse::request() const
{
    Q_D(const GetMappingResponse);
    return static_cast<const GetMappingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetMapping \a response.
 */
void GetMappingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMappingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetMappingResponsePrivate
 * \brief The GetMappingResponsePrivate class provides private implementation for GetMappingResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetMappingResponsePrivate object with public implementation \a q.
 */
GetMappingResponsePrivate::GetMappingResponsePrivate(
    GetMappingResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetMapping response element from \a xml.
 */
void GetMappingResponsePrivate::parseGetMappingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMappingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
