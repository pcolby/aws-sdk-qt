// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsecurityconfigurationresponse.h"
#include "createsecurityconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateSecurityConfigurationResponse
 * \brief The CreateSecurityConfigurationResponse class provides an interace for Glue CreateSecurityConfiguration responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::createSecurityConfiguration
 */

/*!
 * Constructs a CreateSecurityConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSecurityConfigurationResponse::CreateSecurityConfigurationResponse(
        const CreateSecurityConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CreateSecurityConfigurationResponsePrivate(this), parent)
{
    setRequest(new CreateSecurityConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSecurityConfigurationRequest * CreateSecurityConfigurationResponse::request() const
{
    Q_D(const CreateSecurityConfigurationResponse);
    return static_cast<const CreateSecurityConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue CreateSecurityConfiguration \a response.
 */
void CreateSecurityConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSecurityConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::CreateSecurityConfigurationResponsePrivate
 * \brief The CreateSecurityConfigurationResponsePrivate class provides private implementation for CreateSecurityConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateSecurityConfigurationResponsePrivate object with public implementation \a q.
 */
CreateSecurityConfigurationResponsePrivate::CreateSecurityConfigurationResponsePrivate(
    CreateSecurityConfigurationResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue CreateSecurityConfiguration response element from \a xml.
 */
void CreateSecurityConfigurationResponsePrivate::parseCreateSecurityConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSecurityConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
