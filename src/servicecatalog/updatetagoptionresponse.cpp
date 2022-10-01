// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetagoptionresponse.h"
#include "updatetagoptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::UpdateTagOptionResponse
 * \brief The UpdateTagOptionResponse class provides an interace for ServiceCatalog UpdateTagOption responses.
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
 * \sa ServiceCatalogClient::updateTagOption
 */

/*!
 * Constructs a UpdateTagOptionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateTagOptionResponse::UpdateTagOptionResponse(
        const UpdateTagOptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new UpdateTagOptionResponsePrivate(this), parent)
{
    setRequest(new UpdateTagOptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateTagOptionRequest * UpdateTagOptionResponse::request() const
{
    Q_D(const UpdateTagOptionResponse);
    return static_cast<const UpdateTagOptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog UpdateTagOption \a response.
 */
void UpdateTagOptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateTagOptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::UpdateTagOptionResponsePrivate
 * \brief The UpdateTagOptionResponsePrivate class provides private implementation for UpdateTagOptionResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a UpdateTagOptionResponsePrivate object with public implementation \a q.
 */
UpdateTagOptionResponsePrivate::UpdateTagOptionResponsePrivate(
    UpdateTagOptionResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog UpdateTagOption response element from \a xml.
 */
void UpdateTagOptionResponsePrivate::parseUpdateTagOptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTagOptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
