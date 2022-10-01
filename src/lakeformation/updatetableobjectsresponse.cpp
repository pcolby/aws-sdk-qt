// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetableobjectsresponse.h"
#include "updatetableobjectsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::UpdateTableObjectsResponse
 * \brief The UpdateTableObjectsResponse class provides an interace for LakeFormation UpdateTableObjects responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::updateTableObjects
 */

/*!
 * Constructs a UpdateTableObjectsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateTableObjectsResponse::UpdateTableObjectsResponse(
        const UpdateTableObjectsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new UpdateTableObjectsResponsePrivate(this), parent)
{
    setRequest(new UpdateTableObjectsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateTableObjectsRequest * UpdateTableObjectsResponse::request() const
{
    Q_D(const UpdateTableObjectsResponse);
    return static_cast<const UpdateTableObjectsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation UpdateTableObjects \a response.
 */
void UpdateTableObjectsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateTableObjectsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::UpdateTableObjectsResponsePrivate
 * \brief The UpdateTableObjectsResponsePrivate class provides private implementation for UpdateTableObjectsResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a UpdateTableObjectsResponsePrivate object with public implementation \a q.
 */
UpdateTableObjectsResponsePrivate::UpdateTableObjectsResponsePrivate(
    UpdateTableObjectsResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation UpdateTableObjects response element from \a xml.
 */
void UpdateTableObjectsResponsePrivate::parseUpdateTableObjectsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTableObjectsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
