// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletelftagresponse.h"
#include "deletelftagresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::DeleteLFTagResponse
 * \brief The DeleteLFTagResponse class provides an interace for LakeFormation DeleteLFTag responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::deleteLFTag
 */

/*!
 * Constructs a DeleteLFTagResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLFTagResponse::DeleteLFTagResponse(
        const DeleteLFTagRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new DeleteLFTagResponsePrivate(this), parent)
{
    setRequest(new DeleteLFTagRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLFTagRequest * DeleteLFTagResponse::request() const
{
    Q_D(const DeleteLFTagResponse);
    return static_cast<const DeleteLFTagRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation DeleteLFTag \a response.
 */
void DeleteLFTagResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLFTagResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::DeleteLFTagResponsePrivate
 * \brief The DeleteLFTagResponsePrivate class provides private implementation for DeleteLFTagResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a DeleteLFTagResponsePrivate object with public implementation \a q.
 */
DeleteLFTagResponsePrivate::DeleteLFTagResponsePrivate(
    DeleteLFTagResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation DeleteLFTag response element from \a xml.
 */
void DeleteLFTagResponsePrivate::parseDeleteLFTagResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLFTagResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
