// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdatasetresponse.h"
#include "createdatasetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CreateDataSetResponse
 * \brief The CreateDataSetResponse class provides an interace for QuickSight CreateDataSet responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::createDataSet
 */

/*!
 * Constructs a CreateDataSetResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDataSetResponse::CreateDataSetResponse(
        const CreateDataSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new CreateDataSetResponsePrivate(this), parent)
{
    setRequest(new CreateDataSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDataSetRequest * CreateDataSetResponse::request() const
{
    Q_D(const CreateDataSetResponse);
    return static_cast<const CreateDataSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight CreateDataSet \a response.
 */
void CreateDataSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDataSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::CreateDataSetResponsePrivate
 * \brief The CreateDataSetResponsePrivate class provides private implementation for CreateDataSetResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CreateDataSetResponsePrivate object with public implementation \a q.
 */
CreateDataSetResponsePrivate::CreateDataSetResponsePrivate(
    CreateDataSetResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight CreateDataSet response element from \a xml.
 */
void CreateDataSetResponsePrivate::parseCreateDataSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDataSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
