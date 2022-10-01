// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdatasourceresponse.h"
#include "createdatasourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::CreateDataSourceResponse
 * \brief The CreateDataSourceResponse class provides an interace for Kendra CreateDataSource responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::createDataSource
 */

/*!
 * Constructs a CreateDataSourceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDataSourceResponse::CreateDataSourceResponse(
        const CreateDataSourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new CreateDataSourceResponsePrivate(this), parent)
{
    setRequest(new CreateDataSourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDataSourceRequest * CreateDataSourceResponse::request() const
{
    Q_D(const CreateDataSourceResponse);
    return static_cast<const CreateDataSourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra CreateDataSource \a response.
 */
void CreateDataSourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDataSourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::CreateDataSourceResponsePrivate
 * \brief The CreateDataSourceResponsePrivate class provides private implementation for CreateDataSourceResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a CreateDataSourceResponsePrivate object with public implementation \a q.
 */
CreateDataSourceResponsePrivate::CreateDataSourceResponsePrivate(
    CreateDataSourceResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra CreateDataSource response element from \a xml.
 */
void CreateDataSourceResponsePrivate::parseCreateDataSourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDataSourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
