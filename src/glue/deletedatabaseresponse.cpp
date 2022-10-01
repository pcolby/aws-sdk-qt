// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedatabaseresponse.h"
#include "deletedatabaseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteDatabaseResponse
 * \brief The DeleteDatabaseResponse class provides an interace for Glue DeleteDatabase responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteDatabase
 */

/*!
 * Constructs a DeleteDatabaseResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDatabaseResponse::DeleteDatabaseResponse(
        const DeleteDatabaseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeleteDatabaseResponsePrivate(this), parent)
{
    setRequest(new DeleteDatabaseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDatabaseRequest * DeleteDatabaseResponse::request() const
{
    Q_D(const DeleteDatabaseResponse);
    return static_cast<const DeleteDatabaseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue DeleteDatabase \a response.
 */
void DeleteDatabaseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDatabaseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::DeleteDatabaseResponsePrivate
 * \brief The DeleteDatabaseResponsePrivate class provides private implementation for DeleteDatabaseResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteDatabaseResponsePrivate object with public implementation \a q.
 */
DeleteDatabaseResponsePrivate::DeleteDatabaseResponsePrivate(
    DeleteDatabaseResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue DeleteDatabase response element from \a xml.
 */
void DeleteDatabaseResponsePrivate::parseDeleteDatabaseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDatabaseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
