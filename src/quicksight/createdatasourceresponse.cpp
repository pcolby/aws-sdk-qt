// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdatasourceresponse.h"
#include "createdatasourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CreateDataSourceResponse
 * \brief The CreateDataSourceResponse class provides an interace for QuickSight CreateDataSource responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::createDataSource
 */

/*!
 * Constructs a CreateDataSourceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDataSourceResponse::CreateDataSourceResponse(
        const CreateDataSourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new CreateDataSourceResponsePrivate(this), parent)
{
    setRequest(new CreateDataSourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDataSourceRequest * CreateDataSourceResponse::request() const
{
    Q_D(const CreateDataSourceResponse);
    return static_cast<const CreateDataSourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight CreateDataSource \a response.
 */
void CreateDataSourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDataSourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::CreateDataSourceResponsePrivate
 * \brief The CreateDataSourceResponsePrivate class provides private implementation for CreateDataSourceResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CreateDataSourceResponsePrivate object with public implementation \a q.
 */
CreateDataSourceResponsePrivate::CreateDataSourceResponsePrivate(
    CreateDataSourceResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight CreateDataSource response element from \a xml.
 */
void CreateDataSourceResponsePrivate::parseCreateDataSourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDataSourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
