// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addlftagstoresourceresponse.h"
#include "addlftagstoresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::AddLFTagsToResourceResponse
 * \brief The AddLFTagsToResourceResponse class provides an interace for LakeFormation AddLFTagsToResource responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::addLFTagsToResource
 */

/*!
 * Constructs a AddLFTagsToResourceResponse object for \a reply to \a request, with parent \a parent.
 */
AddLFTagsToResourceResponse::AddLFTagsToResourceResponse(
        const AddLFTagsToResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new AddLFTagsToResourceResponsePrivate(this), parent)
{
    setRequest(new AddLFTagsToResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddLFTagsToResourceRequest * AddLFTagsToResourceResponse::request() const
{
    Q_D(const AddLFTagsToResourceResponse);
    return static_cast<const AddLFTagsToResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation AddLFTagsToResource \a response.
 */
void AddLFTagsToResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddLFTagsToResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::AddLFTagsToResourceResponsePrivate
 * \brief The AddLFTagsToResourceResponsePrivate class provides private implementation for AddLFTagsToResourceResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a AddLFTagsToResourceResponsePrivate object with public implementation \a q.
 */
AddLFTagsToResourceResponsePrivate::AddLFTagsToResourceResponsePrivate(
    AddLFTagsToResourceResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation AddLFTagsToResource response element from \a xml.
 */
void AddLFTagsToResourceResponsePrivate::parseAddLFTagsToResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddLFTagsToResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
