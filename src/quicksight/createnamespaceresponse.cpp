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

#include "createnamespaceresponse.h"
#include "createnamespaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CreateNamespaceResponse
 * \brief The CreateNamespaceResponse class provides an interace for QuickSight CreateNamespace responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::createNamespace
 */

/*!
 * Constructs a CreateNamespaceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateNamespaceResponse::CreateNamespaceResponse(
        const CreateNamespaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new CreateNamespaceResponsePrivate(this), parent)
{
    setRequest(new CreateNamespaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateNamespaceRequest * CreateNamespaceResponse::request() const
{
    Q_D(const CreateNamespaceResponse);
    return static_cast<const CreateNamespaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight CreateNamespace \a response.
 */
void CreateNamespaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateNamespaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::CreateNamespaceResponsePrivate
 * \brief The CreateNamespaceResponsePrivate class provides private implementation for CreateNamespaceResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CreateNamespaceResponsePrivate object with public implementation \a q.
 */
CreateNamespaceResponsePrivate::CreateNamespaceResponsePrivate(
    CreateNamespaceResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight CreateNamespace response element from \a xml.
 */
void CreateNamespaceResponsePrivate::parseCreateNamespaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateNamespaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
