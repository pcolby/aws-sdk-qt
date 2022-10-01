// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const AddAttributesToFindingsResponse);
    return static_cast<const AddAttributesToFindingsRequest *>(d->request);
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
