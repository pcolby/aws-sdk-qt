// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateresourceresponse.h"
#include "updateresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::UpdateResourceResponse
 * \brief The UpdateResourceResponse class provides an interace for LakeFormation UpdateResource responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::updateResource
 */

/*!
 * Constructs a UpdateResourceResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateResourceResponse::UpdateResourceResponse(
        const UpdateResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new UpdateResourceResponsePrivate(this), parent)
{
    setRequest(new UpdateResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateResourceRequest * UpdateResourceResponse::request() const
{
    Q_D(const UpdateResourceResponse);
    return static_cast<const UpdateResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation UpdateResource \a response.
 */
void UpdateResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::UpdateResourceResponsePrivate
 * \brief The UpdateResourceResponsePrivate class provides private implementation for UpdateResourceResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a UpdateResourceResponsePrivate object with public implementation \a q.
 */
UpdateResourceResponsePrivate::UpdateResourceResponsePrivate(
    UpdateResourceResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation UpdateResource response element from \a xml.
 */
void UpdateResourceResponsePrivate::parseUpdateResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
