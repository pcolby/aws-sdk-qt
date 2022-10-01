// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteobjectsoncancelresponse.h"
#include "deleteobjectsoncancelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::DeleteObjectsOnCancelResponse
 * \brief The DeleteObjectsOnCancelResponse class provides an interace for LakeFormation DeleteObjectsOnCancel responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::deleteObjectsOnCancel
 */

/*!
 * Constructs a DeleteObjectsOnCancelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteObjectsOnCancelResponse::DeleteObjectsOnCancelResponse(
        const DeleteObjectsOnCancelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new DeleteObjectsOnCancelResponsePrivate(this), parent)
{
    setRequest(new DeleteObjectsOnCancelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteObjectsOnCancelRequest * DeleteObjectsOnCancelResponse::request() const
{
    Q_D(const DeleteObjectsOnCancelResponse);
    return static_cast<const DeleteObjectsOnCancelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation DeleteObjectsOnCancel \a response.
 */
void DeleteObjectsOnCancelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteObjectsOnCancelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::DeleteObjectsOnCancelResponsePrivate
 * \brief The DeleteObjectsOnCancelResponsePrivate class provides private implementation for DeleteObjectsOnCancelResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a DeleteObjectsOnCancelResponsePrivate object with public implementation \a q.
 */
DeleteObjectsOnCancelResponsePrivate::DeleteObjectsOnCancelResponsePrivate(
    DeleteObjectsOnCancelResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation DeleteObjectsOnCancel response element from \a xml.
 */
void DeleteObjectsOnCancelResponsePrivate::parseDeleteObjectsOnCancelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteObjectsOnCancelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
