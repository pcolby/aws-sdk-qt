// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getregistryresponse.h"
#include "getregistryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetRegistryResponse
 * \brief The GetRegistryResponse class provides an interace for Glue GetRegistry responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getRegistry
 */

/*!
 * Constructs a GetRegistryResponse object for \a reply to \a request, with parent \a parent.
 */
GetRegistryResponse::GetRegistryResponse(
        const GetRegistryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetRegistryResponsePrivate(this), parent)
{
    setRequest(new GetRegistryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRegistryRequest * GetRegistryResponse::request() const
{
    Q_D(const GetRegistryResponse);
    return static_cast<const GetRegistryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetRegistry \a response.
 */
void GetRegistryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRegistryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetRegistryResponsePrivate
 * \brief The GetRegistryResponsePrivate class provides private implementation for GetRegistryResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetRegistryResponsePrivate object with public implementation \a q.
 */
GetRegistryResponsePrivate::GetRegistryResponsePrivate(
    GetRegistryResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetRegistry response element from \a xml.
 */
void GetRegistryResponsePrivate::parseGetRegistryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRegistryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
