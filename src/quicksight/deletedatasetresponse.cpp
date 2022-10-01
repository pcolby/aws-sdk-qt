// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedatasetresponse.h"
#include "deletedatasetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::DeleteDataSetResponse
 * \brief The DeleteDataSetResponse class provides an interace for QuickSight DeleteDataSet responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::deleteDataSet
 */

/*!
 * Constructs a DeleteDataSetResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDataSetResponse::DeleteDataSetResponse(
        const DeleteDataSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new DeleteDataSetResponsePrivate(this), parent)
{
    setRequest(new DeleteDataSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDataSetRequest * DeleteDataSetResponse::request() const
{
    Q_D(const DeleteDataSetResponse);
    return static_cast<const DeleteDataSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight DeleteDataSet \a response.
 */
void DeleteDataSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDataSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::DeleteDataSetResponsePrivate
 * \brief The DeleteDataSetResponsePrivate class provides private implementation for DeleteDataSetResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a DeleteDataSetResponsePrivate object with public implementation \a q.
 */
DeleteDataSetResponsePrivate::DeleteDataSetResponsePrivate(
    DeleteDataSetResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight DeleteDataSet response element from \a xml.
 */
void DeleteDataSetResponsePrivate::parseDeleteDataSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDataSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
