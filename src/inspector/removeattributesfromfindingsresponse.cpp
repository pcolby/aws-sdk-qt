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

#include "removeattributesfromfindingsresponse.h"
#include "removeattributesfromfindingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::RemoveAttributesFromFindingsResponse
 * \brief The RemoveAttributesFromFindingsResponse class provides an interace for Inspector RemoveAttributesFromFindings responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="http://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::removeAttributesFromFindings
 */

/*!
 * Constructs a RemoveAttributesFromFindingsResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveAttributesFromFindingsResponse::RemoveAttributesFromFindingsResponse(
        const RemoveAttributesFromFindingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new RemoveAttributesFromFindingsResponsePrivate(this), parent)
{
    setRequest(new RemoveAttributesFromFindingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveAttributesFromFindingsRequest * RemoveAttributesFromFindingsResponse::request() const
{
    Q_D(const RemoveAttributesFromFindingsResponse);
    return static_cast<const RemoveAttributesFromFindingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector RemoveAttributesFromFindings \a response.
 */
void RemoveAttributesFromFindingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveAttributesFromFindingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::RemoveAttributesFromFindingsResponsePrivate
 * \brief The RemoveAttributesFromFindingsResponsePrivate class provides private implementation for RemoveAttributesFromFindingsResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a RemoveAttributesFromFindingsResponsePrivate object with public implementation \a q.
 */
RemoveAttributesFromFindingsResponsePrivate::RemoveAttributesFromFindingsResponsePrivate(
    RemoveAttributesFromFindingsResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector RemoveAttributesFromFindings response element from \a xml.
 */
void RemoveAttributesFromFindingsResponsePrivate::parseRemoveAttributesFromFindingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveAttributesFromFindingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
