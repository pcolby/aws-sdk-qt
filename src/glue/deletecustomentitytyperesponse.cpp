// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecustomentitytyperesponse.h"
#include "deletecustomentitytyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteCustomEntityTypeResponse
 * \brief The DeleteCustomEntityTypeResponse class provides an interace for Glue DeleteCustomEntityType responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteCustomEntityType
 */

/*!
 * Constructs a DeleteCustomEntityTypeResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteCustomEntityTypeResponse::DeleteCustomEntityTypeResponse(
        const DeleteCustomEntityTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeleteCustomEntityTypeResponsePrivate(this), parent)
{
    setRequest(new DeleteCustomEntityTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteCustomEntityTypeRequest * DeleteCustomEntityTypeResponse::request() const
{
    Q_D(const DeleteCustomEntityTypeResponse);
    return static_cast<const DeleteCustomEntityTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue DeleteCustomEntityType \a response.
 */
void DeleteCustomEntityTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteCustomEntityTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::DeleteCustomEntityTypeResponsePrivate
 * \brief The DeleteCustomEntityTypeResponsePrivate class provides private implementation for DeleteCustomEntityTypeResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteCustomEntityTypeResponsePrivate object with public implementation \a q.
 */
DeleteCustomEntityTypeResponsePrivate::DeleteCustomEntityTypeResponsePrivate(
    DeleteCustomEntityTypeResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue DeleteCustomEntityType response element from \a xml.
 */
void DeleteCustomEntityTypeResponsePrivate::parseDeleteCustomEntityTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCustomEntityTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
