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

#include "createingestionresponse.h"
#include "createingestionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CreateIngestionResponse
 * \brief The CreateIngestionResponse class provides an interace for QuickSight CreateIngestion responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the AWS Cloud that makes it easy to
 *  extend data and insights to every user in your organization. This API reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::createIngestion
 */

/*!
 * Constructs a CreateIngestionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateIngestionResponse::CreateIngestionResponse(
        const CreateIngestionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new CreateIngestionResponsePrivate(this), parent)
{
    setRequest(new CreateIngestionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateIngestionRequest * CreateIngestionResponse::request() const
{
    return static_cast<const CreateIngestionRequest *>(QuickSightResponse::request());
}

/*!
 * \reimp
 * Parses a successful QuickSight CreateIngestion \a response.
 */
void CreateIngestionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateIngestionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::CreateIngestionResponsePrivate
 * \brief The CreateIngestionResponsePrivate class provides private implementation for CreateIngestionResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CreateIngestionResponsePrivate object with public implementation \a q.
 */
CreateIngestionResponsePrivate::CreateIngestionResponsePrivate(
    CreateIngestionResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight CreateIngestion response element from \a xml.
 */
void CreateIngestionResponsePrivate::parseCreateIngestionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateIngestionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
