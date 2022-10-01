// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const CreateDataSourceFromRDSResponse);
    return static_cast<const CreateDataSourceFromRDSRequest *>(d->request);
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
