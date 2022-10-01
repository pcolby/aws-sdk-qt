// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdevendpointresponse.h"
#include "getdevendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetDevEndpointResponse
 * \brief The GetDevEndpointResponse class provides an interace for Glue GetDevEndpoint responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getDevEndpoint
 */

/*!
 * Constructs a GetDevEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
GetDevEndpointResponse::GetDevEndpointResponse(
        const GetDevEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetDevEndpointResponsePrivate(this), parent)
{
    setRequest(new GetDevEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDevEndpointRequest * GetDevEndpointResponse::request() const
{
    Q_D(const GetDevEndpointResponse);
    return static_cast<const GetDevEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetDevEndpoint \a response.
 */
void GetDevEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDevEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetDevEndpointResponsePrivate
 * \brief The GetDevEndpointResponsePrivate class provides private implementation for GetDevEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetDevEndpointResponsePrivate object with public implementation \a q.
 */
GetDevEndpointResponsePrivate::GetDevEndpointResponsePrivate(
    GetDevEndpointResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetDevEndpoint response element from \a xml.
 */
void GetDevEndpointResponsePrivate::parseGetDevEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDevEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
