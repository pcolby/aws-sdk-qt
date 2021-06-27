/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletetemplatealiasresponse.h"
#include "deletetemplatealiasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteTemplateAliasResponse
 * \brief The DeleteTemplateAliasResponse class provides an interace for QuickSight DeleteTemplateAlias responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteTemplateAlias
 */

/*!
 * Constructs a DeleteTemplateAliasResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteTemplateAliasResponse::DeleteTemplateAliasResponse(
        const DeleteTemplateAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DeleteTemplateAliasResponsePrivate(this), parent)
{
    setRequest(new DeleteTemplateAliasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteTemplateAliasRequest * DeleteTemplateAliasResponse::request() const
{
    return static_cast<const DeleteTemplateAliasRequest *>(QuickSightResponse::request());
}

/*!
 * \reimp
 * Parses a successful QuickSight DeleteTemplateAlias \a response.
 */
void DeleteTemplateAliasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteTemplateAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DeleteTemplateAliasResponsePrivate
 * \brief The DeleteTemplateAliasResponsePrivate class provides private implementation for DeleteTemplateAliasResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteTemplateAliasResponsePrivate object with public implementation \a q.
 */
DeleteTemplateAliasResponsePrivate::DeleteTemplateAliasResponsePrivate(
    DeleteTemplateAliasResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DeleteTemplateAlias response element from \a xml.
 */
void DeleteTemplateAliasResponsePrivate::parseDeleteTemplateAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTemplateAliasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
