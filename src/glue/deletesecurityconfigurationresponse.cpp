// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesecurityconfigurationresponse.h"
#include "deletesecurityconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteSecurityConfigurationResponse
 * \brief The DeleteSecurityConfigurationResponse class provides an interace for Glue DeleteSecurityConfiguration responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteSecurityConfiguration
 */

/*!
 * Constructs a DeleteSecurityConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSecurityConfigurationResponse::DeleteSecurityConfigurationResponse(
        const DeleteSecurityConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeleteSecurityConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteSecurityConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSecurityConfigurationRequest * DeleteSecurityConfigurationResponse::request() const
{
    Q_D(const DeleteSecurityConfigurationResponse);
    return static_cast<const DeleteSecurityConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue DeleteSecurityConfiguration \a response.
 */
void DeleteSecurityConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSecurityConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::DeleteSecurityConfigurationResponsePrivate
 * \brief The DeleteSecurityConfigurationResponsePrivate class provides private implementation for DeleteSecurityConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteSecurityConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteSecurityConfigurationResponsePrivate::DeleteSecurityConfigurationResponsePrivate(
    DeleteSecurityConfigurationResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue DeleteSecurityConfiguration response element from \a xml.
 */
void DeleteSecurityConfigurationResponsePrivate::parseDeleteSecurityConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSecurityConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
