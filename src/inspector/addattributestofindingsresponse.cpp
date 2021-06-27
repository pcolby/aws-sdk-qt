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

#include "addattributestofindingsresponse.h"
#include "addattributestofindingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::AddAttributesToFindingsResponse
 * \brief The AddAttributesToFindingsResponse class provides an interace for Inspector AddAttributesToFindings responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::addAttributesToFindings
 */

/*!
 * Constructs a AddAttributesToFindingsResponse object for \a reply to \a request, with parent \a parent.
 */
AddAttributesToFindingsResponse::AddAttributesToFindingsResponse(
        const AddAttributesToFindingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new AddAttributesToFindingsResponsePrivate(this), parent)
{
    setRequest(new AddAttributesToFindingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddAttributesToFindingsRequest * AddAttributesToFindingsResponse::request() const
{
    return static_cast<const AddAttributesToFindingsRequest *>(InspectorResponse::request());
}

/*!
 * \reimp
 * Parses a successful Inspector AddAttributesToFindings \a response.
 */
void AddAttributesToFindingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddAttributesToFindingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::AddAttributesToFindingsResponsePrivate
 * \brief The AddAttributesToFindingsResponsePrivate class provides private implementation for AddAttributesToFindingsResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a AddAttributesToFindingsResponsePrivate object with public implementation \a q.
 */
AddAttributesToFindingsResponsePrivate::AddAttributesToFindingsResponsePrivate(
    AddAttributesToFindingsResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector AddAttributesToFindings response element from \a xml.
 */
void AddAttributesToFindingsResponsePrivate::parseAddAttributesToFindingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddAttributesToFindingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
