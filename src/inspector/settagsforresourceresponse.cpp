/*
    Copyright 2013-2019 Paul Colby

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

#include "settagsforresourceresponse.h"
#include "settagsforresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::SetTagsForResourceResponse
 * \brief The SetTagsForResourceResponse class provides an interace for Inspector SetTagsForResource responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::setTagsForResource
 */

/*!
 * Constructs a SetTagsForResourceResponse object for \a reply to \a request, with parent \a parent.
 */
SetTagsForResourceResponse::SetTagsForResourceResponse(
        const SetTagsForResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new SetTagsForResourceResponsePrivate(this), parent)
{
    setRequest(new SetTagsForResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetTagsForResourceRequest * SetTagsForResourceResponse::request() const
{
    Q_D(const SetTagsForResourceResponse);
    return static_cast<const SetTagsForResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector SetTagsForResource \a response.
 */
void SetTagsForResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SetTagsForResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::SetTagsForResourceResponsePrivate
 * \brief The SetTagsForResourceResponsePrivate class provides private implementation for SetTagsForResourceResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a SetTagsForResourceResponsePrivate object with public implementation \a q.
 */
SetTagsForResourceResponsePrivate::SetTagsForResourceResponsePrivate(
    SetTagsForResourceResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector SetTagsForResource response element from \a xml.
 */
void SetTagsForResourceResponsePrivate::parseSetTagsForResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetTagsForResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
