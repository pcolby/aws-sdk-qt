// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addtagstoresourceresponse.h"
#include "addtagstoresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::AddTagsToResourceResponse
 * \brief The AddTagsToResourceResponse class provides an interace for DocDb AddTagsToResource responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::addTagsToResource
 */

/*!
 * Constructs a AddTagsToResourceResponse object for \a reply to \a request, with parent \a parent.
 */
AddTagsToResourceResponse::AddTagsToResourceResponse(
        const AddTagsToResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new AddTagsToResourceResponsePrivate(this), parent)
{
    setRequest(new AddTagsToResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddTagsToResourceRequest * AddTagsToResourceResponse::request() const
{
    Q_D(const AddTagsToResourceResponse);
    return static_cast<const AddTagsToResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb AddTagsToResource \a response.
 */
void AddTagsToResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddTagsToResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::AddTagsToResourceResponsePrivate
 * \brief The AddTagsToResourceResponsePrivate class provides private implementation for AddTagsToResourceResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a AddTagsToResourceResponsePrivate object with public implementation \a q.
 */
AddTagsToResourceResponsePrivate::AddTagsToResourceResponsePrivate(
    AddTagsToResourceResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb AddTagsToResource response element from \a xml.
 */
void AddTagsToResourceResponsePrivate::parseAddTagsToResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddTagsToResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
