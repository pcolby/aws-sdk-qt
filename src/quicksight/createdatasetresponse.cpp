/*
    Copyright 2013-2021 Paul Colby

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
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
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
    return static_cast<const CreateDataSetRequest *>(QuickSightResponse::request());
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
