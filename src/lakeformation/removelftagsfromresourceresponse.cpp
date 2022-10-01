// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removelftagsfromresourceresponse.h"
#include "removelftagsfromresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::RemoveLFTagsFromResourceResponse
 * \brief The RemoveLFTagsFromResourceResponse class provides an interace for LakeFormation RemoveLFTagsFromResource responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::removeLFTagsFromResource
 */

/*!
 * Constructs a RemoveLFTagsFromResourceResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveLFTagsFromResourceResponse::RemoveLFTagsFromResourceResponse(
        const RemoveLFTagsFromResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new RemoveLFTagsFromResourceResponsePrivate(this), parent)
{
    setRequest(new RemoveLFTagsFromResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveLFTagsFromResourceRequest * RemoveLFTagsFromResourceResponse::request() const
{
    Q_D(const RemoveLFTagsFromResourceResponse);
    return static_cast<const RemoveLFTagsFromResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation RemoveLFTagsFromResource \a response.
 */
void RemoveLFTagsFromResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveLFTagsFromResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::RemoveLFTagsFromResourceResponsePrivate
 * \brief The RemoveLFTagsFromResourceResponsePrivate class provides private implementation for RemoveLFTagsFromResourceResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a RemoveLFTagsFromResourceResponsePrivate object with public implementation \a q.
 */
RemoveLFTagsFromResourceResponsePrivate::RemoveLFTagsFromResourceResponsePrivate(
    RemoveLFTagsFromResourceResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation RemoveLFTagsFromResource response element from \a xml.
 */
void RemoveLFTagsFromResourceResponsePrivate::parseRemoveLFTagsFromResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveLFTagsFromResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
