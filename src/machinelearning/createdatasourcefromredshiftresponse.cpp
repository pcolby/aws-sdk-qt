// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_UNUSED(xml) ///< @todo
}

} // namespace MachineLearning
} // namespace QtAws
