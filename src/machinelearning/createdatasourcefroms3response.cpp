/*
    Copyright 2013-2019 Paul Colby

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

#include "createdatasourcefroms3response.h"
#include "createdatasourcefroms3response_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::CreateDataSourceFromS3Response
 * \brief The CreateDataSourceFromS3Response class provides an interace for MachineLearning CreateDataSourceFromS3 responses.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::createDataSourceFromS3
 */

/*!
 * Constructs a CreateDataSourceFromS3Response object for \a reply to \a request, with parent \a parent.
 */
CreateDataSourceFromS3Response::CreateDataSourceFromS3Response(
        const CreateDataSourceFromS3Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new CreateDataSourceFromS3ResponsePrivate(this), parent)
{
    setRequest(new CreateDataSourceFromS3Request(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDataSourceFromS3Request * CreateDataSourceFromS3Response::request() const
{
    Q_D(const CreateDataSourceFromS3Response);
    return static_cast<const CreateDataSourceFromS3Request *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MachineLearning CreateDataSourceFromS3 \a response.
 */
void CreateDataSourceFromS3Response::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDataSourceFromS3Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MachineLearning::CreateDataSourceFromS3ResponsePrivate
 * \brief The CreateDataSourceFromS3ResponsePrivate class provides private implementation for CreateDataSourceFromS3Response.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a CreateDataSourceFromS3ResponsePrivate object with public implementation \a q.
 */
CreateDataSourceFromS3ResponsePrivate::CreateDataSourceFromS3ResponsePrivate(
    CreateDataSourceFromS3Response * const q) : MachineLearningResponsePrivate(q)
{

}

/*!
 * Parses a MachineLearning CreateDataSourceFromS3 response element from \a xml.
 */
void CreateDataSourceFromS3ResponsePrivate::parseCreateDataSourceFromS3Response(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDataSourceFromS3Response"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MachineLearning
} // namespace QtAws
