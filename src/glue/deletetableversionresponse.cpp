// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletetableversionresponse.h"
#include "deletetableversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteTableVersionResponse
 * \brief The DeleteTableVersionResponse class provides an interace for Glue DeleteTableVersion responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteTableVersion
 */

/*!
 * Constructs a DeleteTableVersionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteTableVersionResponse::DeleteTableVersionResponse(
        const DeleteTableVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeleteTableVersionResponsePrivate(this), parent)
{
    setRequest(new DeleteTableVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteTableVersionRequest * DeleteTableVersionResponse::request() const
{
    Q_D(const DeleteTableVersionResponse);
    return static_cast<const DeleteTableVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue DeleteTableVersion \a response.
 */
void DeleteTableVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteTableVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::DeleteTableVersionResponsePrivate
 * \brief The DeleteTableVersionResponsePrivate class provides private implementation for DeleteTableVersionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteTableVersionResponsePrivate object with public implementation \a q.
 */
DeleteTableVersionResponsePrivate::DeleteTableVersionResponsePrivate(
    DeleteTableVersionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue DeleteTableVersion response element from \a xml.
 */
void DeleteTableVersionResponsePrivate::parseDeleteTableVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTableVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
