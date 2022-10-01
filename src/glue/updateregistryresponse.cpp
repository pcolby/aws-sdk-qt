// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateregistryresponse.h"
#include "updateregistryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateRegistryResponse
 * \brief The UpdateRegistryResponse class provides an interace for Glue UpdateRegistry responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::updateRegistry
 */

/*!
 * Constructs a UpdateRegistryResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRegistryResponse::UpdateRegistryResponse(
        const UpdateRegistryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new UpdateRegistryResponsePrivate(this), parent)
{
    setRequest(new UpdateRegistryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRegistryRequest * UpdateRegistryResponse::request() const
{
    Q_D(const UpdateRegistryResponse);
    return static_cast<const UpdateRegistryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue UpdateRegistry \a response.
 */
void UpdateRegistryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateRegistryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::UpdateRegistryResponsePrivate
 * \brief The UpdateRegistryResponsePrivate class provides private implementation for UpdateRegistryResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateRegistryResponsePrivate object with public implementation \a q.
 */
UpdateRegistryResponsePrivate::UpdateRegistryResponsePrivate(
    UpdateRegistryResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue UpdateRegistry response element from \a xml.
 */
void UpdateRegistryResponsePrivate::parseUpdateRegistryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRegistryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
