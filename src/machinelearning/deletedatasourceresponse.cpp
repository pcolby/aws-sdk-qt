// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedatasourceresponse.h"
#include "deletedatasourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::DeleteDataSourceResponse
 * \brief The DeleteDataSourceResponse class provides an interace for MachineLearning DeleteDataSource responses.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::deleteDataSource
 */

/*!
 * Constructs a DeleteDataSourceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDataSourceResponse::DeleteDataSourceResponse(
        const DeleteDataSourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new DeleteDataSourceResponsePrivate(this), parent)
{
    setRequest(new DeleteDataSourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDataSourceRequest * DeleteDataSourceResponse::request() const
{
    Q_D(const DeleteDataSourceResponse);
    return static_cast<const DeleteDataSourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MachineLearning DeleteDataSource \a response.
 */
void DeleteDataSourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDataSourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MachineLearning::DeleteDataSourceResponsePrivate
 * \brief The DeleteDataSourceResponsePrivate class provides private implementation for DeleteDataSourceResponse.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a DeleteDataSourceResponsePrivate object with public implementation \a q.
 */
DeleteDataSourceResponsePrivate::DeleteDataSourceResponsePrivate(
    DeleteDataSourceResponse * const q) : MachineLearningResponsePrivate(q)
{

}

/*!
 * Parses a MachineLearning DeleteDataSource response element from \a xml.
 */
void DeleteDataSourceResponsePrivate::parseDeleteDataSourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDataSourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MachineLearning
} // namespace QtAws
