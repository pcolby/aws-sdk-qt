/*
    Copyright 2013-2018 Paul Colby

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

#include "createdatasourcefromredshiftresponse.h"
#include "createdatasourcefromredshiftresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::CreateDataSourceFromRedshiftResponse
 * \brief The CreateDataSourceFromRedshiftResponse class provides an interace for MachineLearning CreateDataSourceFromRedshift responses.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::createDataSourceFromRedshift
 */

/*!
 * Constructs a CreateDataSourceFromRedshiftResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDataSourceFromRedshiftResponse::CreateDataSourceFromRedshiftResponse(
        const CreateDataSourceFromRedshiftRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new CreateDataSourceFromRedshiftResponsePrivate(this), parent)
{
    setRequest(new CreateDataSourceFromRedshiftRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDataSourceFromRedshiftRequest * CreateDataSourceFromRedshiftResponse::request() const
{
    Q_D(const CreateDataSourceFromRedshiftResponse);
    return static_cast<const CreateDataSourceFromRedshiftRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MachineLearning CreateDataSourceFromRedshift \a response.
 */
void CreateDataSourceFromRedshiftResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDataSourceFromRedshiftResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MachineLearning::CreateDataSourceFromRedshiftResponsePrivate
 * \brief The CreateDataSourceFromRedshiftResponsePrivate class provides private implementation for CreateDataSourceFromRedshiftResponse.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a CreateDataSourceFromRedshiftResponsePrivate object with public implementation \a q.
 */
CreateDataSourceFromRedshiftResponsePrivate::CreateDataSourceFromRedshiftResponsePrivate(
    CreateDataSourceFromRedshiftResponse * const q) : MachineLearningResponsePrivate(q)
{

}

/*!
 * Parses a MachineLearning CreateDataSourceFromRedshift response element from \a xml.
 */
void CreateDataSourceFromRedshiftResponsePrivate::parseCreateDataSourceFromRedshiftResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDataSourceFromRedshiftResponse"));
    /// @todo
}

} // namespace MachineLearning
} // namespace QtAws
