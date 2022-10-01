// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedatabaseresponse.h"
#include "updatedatabaseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateDatabaseResponse
 * \brief The UpdateDatabaseResponse class provides an interace for Glue UpdateDatabase responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::updateDatabase
 */

/*!
 * Constructs a UpdateDatabaseResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDatabaseResponse::UpdateDatabaseResponse(
        const UpdateDatabaseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new UpdateDatabaseResponsePrivate(this), parent)
{
    setRequest(new UpdateDatabaseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDatabaseRequest * UpdateDatabaseResponse::request() const
{
    Q_D(const UpdateDatabaseResponse);
    return static_cast<const UpdateDatabaseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue UpdateDatabase \a response.
 */
void UpdateDatabaseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDatabaseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::UpdateDatabaseResponsePrivate
 * \brief The UpdateDatabaseResponsePrivate class provides private implementation for UpdateDatabaseResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateDatabaseResponsePrivate object with public implementation \a q.
 */
UpdateDatabaseResponsePrivate::UpdateDatabaseResponsePrivate(
    UpdateDatabaseResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue UpdateDatabase response element from \a xml.
 */
void UpdateDatabaseResponsePrivate::parseUpdateDatabaseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDatabaseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
