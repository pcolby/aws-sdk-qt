/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "addtagsresponse.h"
#include "addtagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::AddTagsResponse
 * \brief The AddTagsResponse class provides an interace for MachineLearning AddTags responses.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::addTags
 */

/*!
 * Constructs a AddTagsResponse object for \a reply to \a request, with parent \a parent.
 */
AddTagsResponse::AddTagsResponse(
        const AddTagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new AddTagsResponsePrivate(this), parent)
{
    setRequest(new AddTagsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddTagsRequest * AddTagsResponse::request() const
{
    Q_D(const AddTagsResponse);
    return static_cast<const AddTagsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MachineLearning AddTags \a response.
 */
void AddTagsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddTagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MachineLearning::AddTagsResponsePrivate
 * \brief The AddTagsResponsePrivate class provides private implementation for AddTagsResponse.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a AddTagsResponsePrivate object with public implementation \a q.
 */
AddTagsResponsePrivate::AddTagsResponsePrivate(
    AddTagsResponse * const q) : MachineLearningResponsePrivate(q)
{

}

/*!
 * Parses a MachineLearning AddTags response element from \a xml.
 */
void AddTagsResponsePrivate::parseAddTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddTagsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MachineLearning
} // namespace QtAws
