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

#include "createconstraintresponse.h"
#include "createconstraintresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::CreateConstraintResponse
 * \brief The CreateConstraintResponse class provides an interace for ServiceCatalog CreateConstraint responses.
 *
 * \inmodule QtAwsServiceCatalog
 *
 *  <fullname>AWS Service Catalog</fullname>
 * 
 *  <a href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> enables organizations to create and manage
 *  catalogs of IT services that are approved for use on AWS. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">AWS Service Catalog
 *
 * \sa ServiceCatalogClient::createConstraint
 */

/*!
 * Constructs a CreateConstraintResponse object for \a reply to \a request, with parent \a parent.
 */
CreateConstraintResponse::CreateConstraintResponse(
        const CreateConstraintRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new CreateConstraintResponsePrivate(this), parent)
{
    setRequest(new CreateConstraintRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateConstraintRequest * CreateConstraintResponse::request() const
{
    Q_D(const CreateConstraintResponse);
    return static_cast<const CreateConstraintRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog CreateConstraint \a response.
 */
void CreateConstraintResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateConstraintResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::CreateConstraintResponsePrivate
 * \brief The CreateConstraintResponsePrivate class provides private implementation for CreateConstraintResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a CreateConstraintResponsePrivate object with public implementation \a q.
 */
CreateConstraintResponsePrivate::CreateConstraintResponsePrivate(
    CreateConstraintResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog CreateConstraint response element from \a xml.
 */
void CreateConstraintResponsePrivate::parseCreateConstraintResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateConstraintResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
