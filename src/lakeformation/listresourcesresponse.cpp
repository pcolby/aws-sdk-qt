// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listresourcesresponse.h"
#include "listresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::ListResourcesResponse
 * \brief The ListResourcesResponse class provides an interace for LakeFormation ListResources responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::listResources
 */

/*!
 * Constructs a ListResourcesResponse object for \a reply to \a request, with parent \a parent.
 */
ListResourcesResponse::ListResourcesResponse(
        const ListResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new ListResourcesResponsePrivate(this), parent)
{
    setRequest(new ListResourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListResourcesRequest * ListResourcesResponse::request() const
{
    Q_D(const ListResourcesResponse);
    return static_cast<const ListResourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation ListResources \a response.
 */
void ListResourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListResourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::ListResourcesResponsePrivate
 * \brief The ListResourcesResponsePrivate class provides private implementation for ListResourcesResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a ListResourcesResponsePrivate object with public implementation \a q.
 */
ListResourcesResponsePrivate::ListResourcesResponsePrivate(
    ListResourcesResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation ListResources response element from \a xml.
 */
void ListResourcesResponsePrivate::parseListResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListResourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
