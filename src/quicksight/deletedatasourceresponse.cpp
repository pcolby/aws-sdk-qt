// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedatasourceresponse.h"
#include "deletedatasourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteDataSourceResponse
 * \brief The DeleteDataSourceResponse class provides an interace for QuickSight DeleteDataSource responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteDataSource
 */

/*!
 * Constructs a DeleteDataSourceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDataSourceResponse::DeleteDataSourceResponse(
        const DeleteDataSourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DeleteDataSourceResponsePrivate(this), parent)
{
    setRequest(new DeleteDataSourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDataSourceRequest * DeleteDataSourceResponse::request() const
{
    Q_D(const DeleteDataSourceResponse);
    return static_cast<const DeleteDataSourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DeleteDataSource \a response.
 */
void DeleteDataSourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDataSourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DeleteDataSourceResponsePrivate
 * \brief The DeleteDataSourceResponsePrivate class provides private implementation for DeleteDataSourceResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteDataSourceResponsePrivate object with public implementation \a q.
 */
DeleteDataSourceResponsePrivate::DeleteDataSourceResponsePrivate(
    DeleteDataSourceResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DeleteDataSource response element from \a xml.
 */
void DeleteDataSourceResponsePrivate::parseDeleteDataSourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDataSourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
