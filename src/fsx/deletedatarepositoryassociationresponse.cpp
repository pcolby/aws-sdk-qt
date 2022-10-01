// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
