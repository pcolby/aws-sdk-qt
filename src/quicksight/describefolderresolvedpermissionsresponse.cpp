// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describefolderresolvedpermissionsresponse.h"
#include "describefolderresolvedpermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DescribeFolderResolvedPermissionsResponse
 * \brief The DescribeFolderResolvedPermissionsResponse class provides an interace for QuickSight DescribeFolderResolvedPermissions responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::describeFolderResolvedPermissions
 */

/*!
 * Constructs a DescribeFolderResolvedPermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFolderResolvedPermissionsResponse::DescribeFolderResolvedPermissionsResponse(
        const DescribeFolderResolvedPermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DescribeFolderResolvedPermissionsResponsePrivate(this), parent)
{
    setRequest(new DescribeFolderResolvedPermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFolderResolvedPermissionsRequest * DescribeFolderResolvedPermissionsResponse::request() const
{
    Q_D(const DescribeFolderResolvedPermissionsResponse);
    return static_cast<const DescribeFolderResolvedPermissionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DescribeFolderResolvedPermissions \a response.
 */
void DescribeFolderResolvedPermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFolderResolvedPermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DescribeFolderResolvedPermissionsResponsePrivate
 * \brief The DescribeFolderResolvedPermissionsResponsePrivate class provides private implementation for DescribeFolderResolvedPermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DescribeFolderResolvedPermissionsResponsePrivate object with public implementation \a q.
 */
DescribeFolderResolvedPermissionsResponsePrivate::DescribeFolderResolvedPermissionsResponsePrivate(
    DescribeFolderResolvedPermissionsResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DescribeFolderResolvedPermissions response element from \a xml.
 */
void DescribeFolderResolvedPermissionsResponsePrivate::parseDescribeFolderResolvedPermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFolderResolvedPermissionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
