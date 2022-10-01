// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
