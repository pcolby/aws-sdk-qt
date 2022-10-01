// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listlftagsresponse.h"
#include "listlftagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::ListLFTagsResponse
 * \brief The ListLFTagsResponse class provides an interace for LakeFormation ListLFTags responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::listLFTags
 */

/*!
 * Constructs a ListLFTagsResponse object for \a reply to \a request, with parent \a parent.
 */
ListLFTagsResponse::ListLFTagsResponse(
        const ListLFTagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new ListLFTagsResponsePrivate(this), parent)
{
    setRequest(new ListLFTagsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLFTagsRequest * ListLFTagsResponse::request() const
{
    Q_D(const ListLFTagsResponse);
    return static_cast<const ListLFTagsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation ListLFTags \a response.
 */
void ListLFTagsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLFTagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::ListLFTagsResponsePrivate
 * \brief The ListLFTagsResponsePrivate class provides private implementation for ListLFTagsResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a ListLFTagsResponsePrivate object with public implementation \a q.
 */
ListLFTagsResponsePrivate::ListLFTagsResponsePrivate(
    ListLFTagsResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation ListLFTags response element from \a xml.
 */
void ListLFTagsResponsePrivate::parseListLFTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLFTagsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
