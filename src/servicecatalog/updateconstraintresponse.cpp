// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateconstraintresponse.h"
#include "updateconstraintresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::UpdateConstraintResponse
 * \brief The UpdateConstraintResponse class provides an interace for ServiceCatalog UpdateConstraint responses.
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
 * \sa ServiceCatalogClient::updateConstraint
 */

/*!
 * Constructs a UpdateConstraintResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateConstraintResponse::UpdateConstraintResponse(
        const UpdateConstraintRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new UpdateConstraintResponsePrivate(this), parent)
{
    setRequest(new UpdateConstraintRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateConstraintRequest * UpdateConstraintResponse::request() const
{
    Q_D(const UpdateConstraintResponse);
    return static_cast<const UpdateConstraintRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog UpdateConstraint \a response.
 */
void UpdateConstraintResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateConstraintResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::UpdateConstraintResponsePrivate
 * \brief The UpdateConstraintResponsePrivate class provides private implementation for UpdateConstraintResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a UpdateConstraintResponsePrivate object with public implementation \a q.
 */
UpdateConstraintResponsePrivate::UpdateConstraintResponsePrivate(
    UpdateConstraintResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog UpdateConstraint response element from \a xml.
 */
void UpdateConstraintResponsePrivate::parseUpdateConstraintResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConstraintResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
