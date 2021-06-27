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

#include "createdatasourcefromrdsresponse.h"
#include "createdatasourcefromrdsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::CreateDataSourceFromRDSResponse
 * \brief The CreateDataSourceFromRDSResponse class provides an interace for MachineLearning CreateDataSourceFromRDS responses.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::createDataSourceFromRDS
 */

/*!
 * Constructs a CreateDataSourceFromRDSResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDataSourceFromRDSResponse::CreateDataSourceFromRDSResponse(
        const CreateDataSourceFromRDSRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new CreateDataSourceFromRDSResponsePrivate(this), parent)
{
    setRequest(new CreateDataSourceFromRDSRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDataSourceFromRDSRequest * CreateDataSourceFromRDSResponse::request() const
{
    return static_cast<const CreateDataSourceFromRDSRequest *>(MachineLearningResponse::request());
}

/*!
 * \reimp
 * Parses a successful MachineLearning CreateDataSourceFromRDS \a response.
 */
void CreateDataSourceFromRDSResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDataSourceFromRDSResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MachineLearning::CreateDataSourceFromRDSResponsePrivate
 * \brief The CreateDataSourceFromRDSResponsePrivate class provides private implementation for CreateDataSourceFromRDSResponse.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a CreateDataSourceFromRDSResponsePrivate object with public implementation \a q.
 */
CreateDataSourceFromRDSResponsePrivate::CreateDataSourceFromRDSResponsePrivate(
    CreateDataSourceFromRDSResponse * const q) : MachineLearningResponsePrivate(q)
{

}

/*!
 * Parses a MachineLearning CreateDataSourceFromRDS response element from \a xml.
 */
void CreateDataSourceFromRDSResponsePrivate::parseCreateDataSourceFromRDSResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDataSourceFromRDSResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MachineLearning
} // namespace QtAws
