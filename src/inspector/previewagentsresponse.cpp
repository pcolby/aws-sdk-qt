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

#include "previewagentsresponse.h"
#include "previewagentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::PreviewAgentsResponse
 * \brief The PreviewAgentsResponse class provides an interace for Inspector PreviewAgents responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="http://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::previewAgents
 */

/*!
 * Constructs a PreviewAgentsResponse object for \a reply to \a request, with parent \a parent.
 */
PreviewAgentsResponse::PreviewAgentsResponse(
        const PreviewAgentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new PreviewAgentsResponsePrivate(this), parent)
{
    setRequest(new PreviewAgentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PreviewAgentsRequest * PreviewAgentsResponse::request() const
{
    Q_D(const PreviewAgentsResponse);
    return static_cast<const PreviewAgentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector PreviewAgents \a response.
 */
void PreviewAgentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PreviewAgentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::PreviewAgentsResponsePrivate
 * \brief The PreviewAgentsResponsePrivate class provides private implementation for PreviewAgentsResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a PreviewAgentsResponsePrivate object with public implementation \a q.
 */
PreviewAgentsResponsePrivate::PreviewAgentsResponsePrivate(
    PreviewAgentsResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector PreviewAgents response element from \a xml.
 */
void PreviewAgentsResponsePrivate::parsePreviewAgentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PreviewAgentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
