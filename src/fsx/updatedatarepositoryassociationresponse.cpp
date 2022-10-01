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

#include "updatedatarepositoryassociationresponse.h"
#include "updatedatarepositoryassociationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::UpdateDataRepositoryAssociationResponse
 * \brief The UpdateDataRepositoryAssociationResponse class provides an interace for FSx UpdateDataRepositoryAssociation responses.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::updateDataRepositoryAssociation
 */

/*!
 * Constructs a UpdateDataRepositoryAssociationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDataRepositoryAssociationResponse::UpdateDataRepositoryAssociationResponse(
        const UpdateDataRepositoryAssociationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FSxResponse(new UpdateDataRepositoryAssociationResponsePrivate(this), parent)
{
    setRequest(new UpdateDataRepositoryAssociationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDataRepositoryAssociationRequest * UpdateDataRepositoryAssociationResponse::request() const
{
    Q_D(const UpdateDataRepositoryAssociationResponse);
    return static_cast<const UpdateDataRepositoryAssociationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FSx UpdateDataRepositoryAssociation \a response.
 */
void UpdateDataRepositoryAssociationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDataRepositoryAssociationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FSx::UpdateDataRepositoryAssociationResponsePrivate
 * \brief The UpdateDataRepositoryAssociationResponsePrivate class provides private implementation for UpdateDataRepositoryAssociationResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a UpdateDataRepositoryAssociationResponsePrivate object with public implementation \a q.
 */
UpdateDataRepositoryAssociationResponsePrivate::UpdateDataRepositoryAssociationResponsePrivate(
    UpdateDataRepositoryAssociationResponse * const q) : FSxResponsePrivate(q)
{

}

/*!
 * Parses a FSx UpdateDataRepositoryAssociation response element from \a xml.
 */
void UpdateDataRepositoryAssociationResponsePrivate::parseUpdateDataRepositoryAssociationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDataRepositoryAssociationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FSx
} // namespace QtAws
