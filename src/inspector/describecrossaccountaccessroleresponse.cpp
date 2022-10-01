// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecrossaccountaccessroleresponse.h"
#include "describecrossaccountaccessroleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::DescribeCrossAccountAccessRoleResponse
 * \brief The DescribeCrossAccountAccessRoleResponse class provides an interace for Inspector DescribeCrossAccountAccessRole responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::describeCrossAccountAccessRole
 */

/*!
 * Constructs a DescribeCrossAccountAccessRoleResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeCrossAccountAccessRoleResponse::DescribeCrossAccountAccessRoleResponse(
        const DescribeCrossAccountAccessRoleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new DescribeCrossAccountAccessRoleResponsePrivate(this), parent)
{
    setRequest(new DescribeCrossAccountAccessRoleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeCrossAccountAccessRoleRequest * DescribeCrossAccountAccessRoleResponse::request() const
{
    Q_D(const DescribeCrossAccountAccessRoleResponse);
    return static_cast<const DescribeCrossAccountAccessRoleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector DescribeCrossAccountAccessRole \a response.
 */
void DescribeCrossAccountAccessRoleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeCrossAccountAccessRoleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::DescribeCrossAccountAccessRoleResponsePrivate
 * \brief The DescribeCrossAccountAccessRoleResponsePrivate class provides private implementation for DescribeCrossAccountAccessRoleResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a DescribeCrossAccountAccessRoleResponsePrivate object with public implementation \a q.
 */
DescribeCrossAccountAccessRoleResponsePrivate::DescribeCrossAccountAccessRoleResponsePrivate(
    DescribeCrossAccountAccessRoleResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector DescribeCrossAccountAccessRole response element from \a xml.
 */
void DescribeCrossAccountAccessRoleResponsePrivate::parseDescribeCrossAccountAccessRoleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCrossAccountAccessRoleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
