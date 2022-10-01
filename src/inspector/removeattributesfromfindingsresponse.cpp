// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
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
