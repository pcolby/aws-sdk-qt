// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedatasetresponse.h"
#include "updatedatasetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::UpdateDataSetResponse
 * \brief The UpdateDataSetResponse class provides an interace for QuickSight UpdateDataSet responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::updateDataSet
 */

/*!
 * Constructs a UpdateDataSetResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDataSetResponse::UpdateDataSetResponse(
        const UpdateDataSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new UpdateDataSetResponsePrivate(this), parent)
{
    setRequest(new UpdateDataSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDataSetRequest * UpdateDataSetResponse::request() const
{
    Q_D(const UpdateDataSetResponse);
    return static_cast<const UpdateDataSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight UpdateDataSet \a response.
 */
void UpdateDataSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDataSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::UpdateDataSetResponsePrivate
 * \brief The UpdateDataSetResponsePrivate class provides private implementation for UpdateDataSetResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a UpdateDataSetResponsePrivate object with public implementation \a q.
 */
UpdateDataSetResponsePrivate::UpdateDataSetResponsePrivate(
    UpdateDataSetResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight UpdateDataSet response element from \a xml.
 */
void UpdateDataSetResponsePrivate::parseUpdateDataSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDataSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
