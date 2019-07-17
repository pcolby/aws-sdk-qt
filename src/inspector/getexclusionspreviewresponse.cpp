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

#include "getexclusionspreviewresponse.h"
#include "getexclusionspreviewresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::GetExclusionsPreviewResponse
 * \brief The GetExclusionsPreviewResponse class provides an interace for Inspector GetExclusionsPreview responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="http://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::getExclusionsPreview
 */

/*!
 * Constructs a GetExclusionsPreviewResponse object for \a reply to \a request, with parent \a parent.
 */
GetExclusionsPreviewResponse::GetExclusionsPreviewResponse(
        const GetExclusionsPreviewRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new GetExclusionsPreviewResponsePrivate(this), parent)
{
    setRequest(new GetExclusionsPreviewRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetExclusionsPreviewRequest * GetExclusionsPreviewResponse::request() const
{
    Q_D(const GetExclusionsPreviewResponse);
    return static_cast<const GetExclusionsPreviewRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector GetExclusionsPreview \a response.
 */
void GetExclusionsPreviewResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetExclusionsPreviewResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::GetExclusionsPreviewResponsePrivate
 * \brief The GetExclusionsPreviewResponsePrivate class provides private implementation for GetExclusionsPreviewResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a GetExclusionsPreviewResponsePrivate object with public implementation \a q.
 */
GetExclusionsPreviewResponsePrivate::GetExclusionsPreviewResponsePrivate(
    GetExclusionsPreviewResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector GetExclusionsPreview response element from \a xml.
 */
void GetExclusionsPreviewResponsePrivate::parseGetExclusionsPreviewResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetExclusionsPreviewResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
