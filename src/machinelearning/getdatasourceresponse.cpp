// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdatasourceresponse.h"
#include "getdatasourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::GetDataSourceResponse
 * \brief The GetDataSourceResponse class provides an interace for MachineLearning GetDataSource responses.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::getDataSource
 */

/*!
 * Constructs a GetDataSourceResponse object for \a reply to \a request, with parent \a parent.
 */
GetDataSourceResponse::GetDataSourceResponse(
        const GetDataSourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new GetDataSourceResponsePrivate(this), parent)
{
    setRequest(new GetDataSourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDataSourceRequest * GetDataSourceResponse::request() const
{
    Q_D(const GetDataSourceResponse);
    return static_cast<const GetDataSourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MachineLearning GetDataSource \a response.
 */
void GetDataSourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDataSourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MachineLearning::GetDataSourceResponsePrivate
 * \brief The GetDataSourceResponsePrivate class provides private implementation for GetDataSourceResponse.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a GetDataSourceResponsePrivate object with public implementation \a q.
 */
GetDataSourceResponsePrivate::GetDataSourceResponsePrivate(
    GetDataSourceResponse * const q) : MachineLearningResponsePrivate(q)
{

}

/*!
 * Parses a MachineLearning GetDataSource response element from \a xml.
 */
void GetDataSourceResponsePrivate::parseGetDataSourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDataSourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MachineLearning
} // namespace QtAws
