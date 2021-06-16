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

#include "deletenamespaceresponse.h"
#include "deletenamespaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteNamespaceResponse
 * \brief The DeleteNamespaceResponse class provides an interace for QuickSight DeleteNamespace responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteNamespace
 */

/*!
 * Constructs a DeleteNamespaceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteNamespaceResponse::DeleteNamespaceResponse(
        const DeleteNamespaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DeleteNamespaceResponsePrivate(this), parent)
{
    setRequest(new DeleteNamespaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteNamespaceRequest * DeleteNamespaceResponse::request() const
{
    Q_D(const DeleteNamespaceResponse);
    return static_cast<const DeleteNamespaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DeleteNamespace \a response.
 */
void DeleteNamespaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteNamespaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DeleteNamespaceResponsePrivate
 * \brief The DeleteNamespaceResponsePrivate class provides private implementation for DeleteNamespaceResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteNamespaceResponsePrivate object with public implementation \a q.
 */
DeleteNamespaceResponsePrivate::DeleteNamespaceResponsePrivate(
    DeleteNamespaceResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DeleteNamespace response element from \a xml.
 */
void DeleteNamespaceResponsePrivate::parseDeleteNamespaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteNamespaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
