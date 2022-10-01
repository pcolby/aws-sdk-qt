// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatelftagresponse.h"
#include "updatelftagresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::UpdateLFTagResponse
 * \brief The UpdateLFTagResponse class provides an interace for LakeFormation UpdateLFTag responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::updateLFTag
 */

/*!
 * Constructs a UpdateLFTagResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateLFTagResponse::UpdateLFTagResponse(
        const UpdateLFTagRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new UpdateLFTagResponsePrivate(this), parent)
{
    setRequest(new UpdateLFTagRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateLFTagRequest * UpdateLFTagResponse::request() const
{
    Q_D(const UpdateLFTagResponse);
    return static_cast<const UpdateLFTagRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation UpdateLFTag \a response.
 */
void UpdateLFTagResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateLFTagResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::UpdateLFTagResponsePrivate
 * \brief The UpdateLFTagResponsePrivate class provides private implementation for UpdateLFTagResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a UpdateLFTagResponsePrivate object with public implementation \a q.
 */
UpdateLFTagResponsePrivate::UpdateLFTagResponsePrivate(
    UpdateLFTagResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation UpdateLFTag response element from \a xml.
 */
void UpdateLFTagResponsePrivate::parseUpdateLFTagResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLFTagResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
