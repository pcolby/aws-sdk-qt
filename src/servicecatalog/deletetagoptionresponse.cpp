// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletetagoptionresponse.h"
#include "deletetagoptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DeleteTagOptionResponse
 * \brief The DeleteTagOptionResponse class provides an interace for ServiceCatalog DeleteTagOption responses.
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
 * \sa ServiceCatalogClient::deleteTagOption
 */

/*!
 * Constructs a DeleteTagOptionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteTagOptionResponse::DeleteTagOptionResponse(
        const DeleteTagOptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DeleteTagOptionResponsePrivate(this), parent)
{
    setRequest(new DeleteTagOptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteTagOptionRequest * DeleteTagOptionResponse::request() const
{
    Q_D(const DeleteTagOptionResponse);
    return static_cast<const DeleteTagOptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog DeleteTagOption \a response.
 */
void DeleteTagOptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteTagOptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::DeleteTagOptionResponsePrivate
 * \brief The DeleteTagOptionResponsePrivate class provides private implementation for DeleteTagOptionResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DeleteTagOptionResponsePrivate object with public implementation \a q.
 */
DeleteTagOptionResponsePrivate::DeleteTagOptionResponsePrivate(
    DeleteTagOptionResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog DeleteTagOption response element from \a xml.
 */
void DeleteTagOptionResponsePrivate::parseDeleteTagOptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTagOptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
