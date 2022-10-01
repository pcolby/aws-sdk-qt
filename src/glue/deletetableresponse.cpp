// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletetableresponse.h"
#include "deletetableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteTableResponse
 * \brief The DeleteTableResponse class provides an interace for Glue DeleteTable responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteTable
 */

/*!
 * Constructs a DeleteTableResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteTableResponse::DeleteTableResponse(
        const DeleteTableRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeleteTableResponsePrivate(this), parent)
{
    setRequest(new DeleteTableRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteTableRequest * DeleteTableResponse::request() const
{
    Q_D(const DeleteTableResponse);
    return static_cast<const DeleteTableRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue DeleteTable \a response.
 */
void DeleteTableResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteTableResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::DeleteTableResponsePrivate
 * \brief The DeleteTableResponsePrivate class provides private implementation for DeleteTableResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteTableResponsePrivate object with public implementation \a q.
 */
DeleteTableResponsePrivate::DeleteTableResponsePrivate(
    DeleteTableResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue DeleteTable response element from \a xml.
 */
void DeleteTableResponsePrivate::parseDeleteTableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTableResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
