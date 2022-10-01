// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateblueprintresponse.h"
#include "updateblueprintresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateBlueprintResponse
 * \brief The UpdateBlueprintResponse class provides an interace for Glue UpdateBlueprint responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::updateBlueprint
 */

/*!
 * Constructs a UpdateBlueprintResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateBlueprintResponse::UpdateBlueprintResponse(
        const UpdateBlueprintRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new UpdateBlueprintResponsePrivate(this), parent)
{
    setRequest(new UpdateBlueprintRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateBlueprintRequest * UpdateBlueprintResponse::request() const
{
    Q_D(const UpdateBlueprintResponse);
    return static_cast<const UpdateBlueprintRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue UpdateBlueprint \a response.
 */
void UpdateBlueprintResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateBlueprintResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::UpdateBlueprintResponsePrivate
 * \brief The UpdateBlueprintResponsePrivate class provides private implementation for UpdateBlueprintResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateBlueprintResponsePrivate object with public implementation \a q.
 */
UpdateBlueprintResponsePrivate::UpdateBlueprintResponsePrivate(
    UpdateBlueprintResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue UpdateBlueprint response element from \a xml.
 */
void UpdateBlueprintResponsePrivate::parseUpdateBlueprintResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBlueprintResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
