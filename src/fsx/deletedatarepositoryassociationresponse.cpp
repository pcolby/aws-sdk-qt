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

#include "deletedatarepositoryassociationresponse.h"
#include "deletedatarepositoryassociationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::DeleteDataRepositoryAssociationResponse
 * \brief The DeleteDataRepositoryAssociationResponse class provides an interace for FSx DeleteDataRepositoryAssociation responses.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::deleteDataRepositoryAssociation
 */

/*!
 * Constructs a DeleteDataRepositoryAssociationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDataRepositoryAssociationResponse::DeleteDataRepositoryAssociationResponse(
        const DeleteDataRepositoryAssociationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FSxResponse(new DeleteDataRepositoryAssociationResponsePrivate(this), parent)
{
    setRequest(new DeleteDataRepositoryAssociationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDataRepositoryAssociationRequest * DeleteDataRepositoryAssociationResponse::request() const
{
    Q_D(const DeleteDataRepositoryAssociationResponse);
    return static_cast<const DeleteDataRepositoryAssociationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FSx DeleteDataRepositoryAssociation \a response.
 */
void DeleteDataRepositoryAssociationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDataRepositoryAssociationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FSx::DeleteDataRepositoryAssociationResponsePrivate
 * \brief The DeleteDataRepositoryAssociationResponsePrivate class provides private implementation for DeleteDataRepositoryAssociationResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a DeleteDataRepositoryAssociationResponsePrivate object with public implementation \a q.
 */
DeleteDataRepositoryAssociationResponsePrivate::DeleteDataRepositoryAssociationResponsePrivate(
    DeleteDataRepositoryAssociationResponse * const q) : FSxResponsePrivate(q)
{

}

/*!
 * Parses a FSx DeleteDataRepositoryAssociation response element from \a xml.
 */
void DeleteDataRepositoryAssociationResponsePrivate::parseDeleteDataRepositoryAssociationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDataRepositoryAssociationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FSx
} // namespace QtAws
