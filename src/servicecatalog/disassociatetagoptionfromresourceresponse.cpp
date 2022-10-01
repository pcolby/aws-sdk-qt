// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatetagoptionfromresourceresponse.h"
#include "disassociatetagoptionfromresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DisassociateTagOptionFromResourceResponse
 * \brief The DisassociateTagOptionFromResourceResponse class provides an interace for ServiceCatalog DisassociateTagOptionFromResource responses.
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
 * \sa ServiceCatalogClient::disassociateTagOptionFromResource
 */

/*!
 * Constructs a DisassociateTagOptionFromResourceResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateTagOptionFromResourceResponse::DisassociateTagOptionFromResourceResponse(
        const DisassociateTagOptionFromResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DisassociateTagOptionFromResourceResponsePrivate(this), parent)
{
    setRequest(new DisassociateTagOptionFromResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateTagOptionFromResourceRequest * DisassociateTagOptionFromResourceResponse::request() const
{
    Q_D(const DisassociateTagOptionFromResourceResponse);
    return static_cast<const DisassociateTagOptionFromResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog DisassociateTagOptionFromResource \a response.
 */
void DisassociateTagOptionFromResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateTagOptionFromResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::DisassociateTagOptionFromResourceResponsePrivate
 * \brief The DisassociateTagOptionFromResourceResponsePrivate class provides private implementation for DisassociateTagOptionFromResourceResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DisassociateTagOptionFromResourceResponsePrivate object with public implementation \a q.
 */
DisassociateTagOptionFromResourceResponsePrivate::DisassociateTagOptionFromResourceResponsePrivate(
    DisassociateTagOptionFromResourceResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog DisassociateTagOptionFromResource response element from \a xml.
 */
void DisassociateTagOptionFromResourceResponsePrivate::parseDisassociateTagOptionFromResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateTagOptionFromResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
