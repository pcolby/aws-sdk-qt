// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <a href="https://aws.amazon.com/servicecatalog/">Service Catalog</a> enables organizations to create and manage catalogs
 *  of IT services that are approved for Amazon Web Services. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">Service Catalog
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
    //Q_D(CreateConstraintResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
