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
