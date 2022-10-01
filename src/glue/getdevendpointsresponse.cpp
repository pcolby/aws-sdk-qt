// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdevendpointsresponse.h"
#include "getdevendpointsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetDevEndpointsResponse
 * \brief The GetDevEndpointsResponse class provides an interace for Glue GetDevEndpoints responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getDevEndpoints
 */

/*!
 * Constructs a GetDevEndpointsResponse object for \a reply to \a request, with parent \a parent.
 */
GetDevEndpointsResponse::GetDevEndpointsResponse(
        const GetDevEndpointsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetDevEndpointsResponsePrivate(this), parent)
{
    setRequest(new GetDevEndpointsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDevEndpointsRequest * GetDevEndpointsResponse::request() const
{
    Q_D(const GetDevEndpointsResponse);
    return static_cast<const GetDevEndpointsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetDevEndpoints \a response.
 */
void GetDevEndpointsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDevEndpointsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetDevEndpointsResponsePrivate
 * \brief The GetDevEndpointsResponsePrivate class provides private implementation for GetDevEndpointsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetDevEndpointsResponsePrivate object with public implementation \a q.
 */
GetDevEndpointsResponsePrivate::GetDevEndpointsResponsePrivate(
    GetDevEndpointsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetDevEndpoints response element from \a xml.
 */
void GetDevEndpointsResponsePrivate::parseGetDevEndpointsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDevEndpointsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
