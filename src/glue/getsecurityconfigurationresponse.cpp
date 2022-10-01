// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsecurityconfigurationresponse.h"
#include "getsecurityconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetSecurityConfigurationResponse
 * \brief The GetSecurityConfigurationResponse class provides an interace for Glue GetSecurityConfiguration responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getSecurityConfiguration
 */

/*!
 * Constructs a GetSecurityConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetSecurityConfigurationResponse::GetSecurityConfigurationResponse(
        const GetSecurityConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetSecurityConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetSecurityConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSecurityConfigurationRequest * GetSecurityConfigurationResponse::request() const
{
    Q_D(const GetSecurityConfigurationResponse);
    return static_cast<const GetSecurityConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetSecurityConfiguration \a response.
 */
void GetSecurityConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSecurityConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetSecurityConfigurationResponsePrivate
 * \brief The GetSecurityConfigurationResponsePrivate class provides private implementation for GetSecurityConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetSecurityConfigurationResponsePrivate object with public implementation \a q.
 */
GetSecurityConfigurationResponsePrivate::GetSecurityConfigurationResponsePrivate(
    GetSecurityConfigurationResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetSecurityConfiguration response element from \a xml.
 */
void GetSecurityConfigurationResponsePrivate::parseGetSecurityConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSecurityConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
