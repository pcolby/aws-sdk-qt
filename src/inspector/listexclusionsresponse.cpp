/*
    Copyright 2013-2021 Paul Colby

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

#include "listexclusionsresponse.h"
#include "listexclusionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::ListExclusionsResponse
 * \brief The ListExclusionsResponse class provides an interace for Inspector ListExclusions responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::listExclusions
 */

/*!
 * Constructs a ListExclusionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListExclusionsResponse::ListExclusionsResponse(
        const ListExclusionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new ListExclusionsResponsePrivate(this), parent)
{
    setRequest(new ListExclusionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListExclusionsRequest * ListExclusionsResponse::request() const
{
    return static_cast<const ListExclusionsRequest *>(InspectorResponse::request());
}

/*!
 * \reimp
 * Parses a successful Inspector ListExclusions \a response.
 */
void ListExclusionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListExclusionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::ListExclusionsResponsePrivate
 * \brief The ListExclusionsResponsePrivate class provides private implementation for ListExclusionsResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a ListExclusionsResponsePrivate object with public implementation \a q.
 */
ListExclusionsResponsePrivate::ListExclusionsResponsePrivate(
    ListExclusionsResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector ListExclusions response element from \a xml.
 */
void ListExclusionsResponsePrivate::parseListExclusionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListExclusionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
