// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createblueprintresponse.h"
#include "createblueprintresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateBlueprintResponse
 * \brief The CreateBlueprintResponse class provides an interace for Glue CreateBlueprint responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::createBlueprint
 */

/*!
 * Constructs a CreateBlueprintResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBlueprintResponse::CreateBlueprintResponse(
        const CreateBlueprintRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CreateBlueprintResponsePrivate(this), parent)
{
    setRequest(new CreateBlueprintRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBlueprintRequest * CreateBlueprintResponse::request() const
{
    Q_D(const CreateBlueprintResponse);
    return static_cast<const CreateBlueprintRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue CreateBlueprint \a response.
 */
void CreateBlueprintResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBlueprintResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::CreateBlueprintResponsePrivate
 * \brief The CreateBlueprintResponsePrivate class provides private implementation for CreateBlueprintResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateBlueprintResponsePrivate object with public implementation \a q.
 */
CreateBlueprintResponsePrivate::CreateBlueprintResponsePrivate(
    CreateBlueprintResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue CreateBlueprint response element from \a xml.
 */
void CreateBlueprintResponsePrivate::parseCreateBlueprintResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBlueprintResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
