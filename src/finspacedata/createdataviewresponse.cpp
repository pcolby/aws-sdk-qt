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

#include "createdataviewresponse.h"
#include "createdataviewresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::CreateDataViewResponse
 * \brief The CreateDataViewResponse class provides an interace for FinspaceData CreateDataView responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::createDataView
 */

/*!
 * Constructs a CreateDataViewResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDataViewResponse::CreateDataViewResponse(
        const CreateDataViewRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new CreateDataViewResponsePrivate(this), parent)
{
    setRequest(new CreateDataViewRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDataViewRequest * CreateDataViewResponse::request() const
{
    Q_D(const CreateDataViewResponse);
    return static_cast<const CreateDataViewRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinspaceData CreateDataView \a response.
 */
void CreateDataViewResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDataViewResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::CreateDataViewResponsePrivate
 * \brief The CreateDataViewResponsePrivate class provides private implementation for CreateDataViewResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a CreateDataViewResponsePrivate object with public implementation \a q.
 */
CreateDataViewResponsePrivate::CreateDataViewResponsePrivate(
    CreateDataViewResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData CreateDataView response element from \a xml.
 */
void CreateDataViewResponsePrivate::parseCreateDataViewResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDataViewResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws
