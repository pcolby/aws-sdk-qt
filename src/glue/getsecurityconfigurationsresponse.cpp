// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsecurityconfigurationsresponse.h"
#include "getsecurityconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetSecurityConfigurationsResponse
 * \brief The GetSecurityConfigurationsResponse class provides an interace for Glue GetSecurityConfigurations responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getSecurityConfigurations
 */

/*!
 * Constructs a GetSecurityConfigurationsResponse object for \a reply to \a request, with parent \a parent.
 */
GetSecurityConfigurationsResponse::GetSecurityConfigurationsResponse(
        const GetSecurityConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetSecurityConfigurationsResponsePrivate(this), parent)
{
    setRequest(new GetSecurityConfigurationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSecurityConfigurationsRequest * GetSecurityConfigurationsResponse::request() const
{
    Q_D(const GetSecurityConfigurationsResponse);
    return static_cast<const GetSecurityConfigurationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetSecurityConfigurations \a response.
 */
void GetSecurityConfigurationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSecurityConfigurationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetSecurityConfigurationsResponsePrivate
 * \brief The GetSecurityConfigurationsResponsePrivate class provides private implementation for GetSecurityConfigurationsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetSecurityConfigurationsResponsePrivate object with public implementation \a q.
 */
GetSecurityConfigurationsResponsePrivate::GetSecurityConfigurationsResponsePrivate(
    GetSecurityConfigurationsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetSecurityConfigurations response element from \a xml.
 */
void GetSecurityConfigurationsResponsePrivate::parseGetSecurityConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSecurityConfigurationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
