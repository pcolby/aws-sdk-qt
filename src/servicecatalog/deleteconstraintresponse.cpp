// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteconstraintresponse.h"
#include "deleteconstraintresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DeleteConstraintResponse
 * \brief The DeleteConstraintResponse class provides an interace for ServiceCatalog DeleteConstraint responses.
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
 * \sa ServiceCatalogClient::deleteConstraint
 */

/*!
 * Constructs a DeleteConstraintResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteConstraintResponse::DeleteConstraintResponse(
        const DeleteConstraintRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DeleteConstraintResponsePrivate(this), parent)
{
    setRequest(new DeleteConstraintRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteConstraintRequest * DeleteConstraintResponse::request() const
{
    Q_D(const DeleteConstraintResponse);
    return static_cast<const DeleteConstraintRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog DeleteConstraint \a response.
 */
void DeleteConstraintResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteConstraintResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::DeleteConstraintResponsePrivate
 * \brief The DeleteConstraintResponsePrivate class provides private implementation for DeleteConstraintResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DeleteConstraintResponsePrivate object with public implementation \a q.
 */
DeleteConstraintResponsePrivate::DeleteConstraintResponsePrivate(
    DeleteConstraintResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog DeleteConstraint response element from \a xml.
 */
void DeleteConstraintResponsePrivate::parseDeleteConstraintResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteConstraintResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
