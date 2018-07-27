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
 *  <a href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> enables organizations to create and manage
 *  catalogs of IT services that are approved for use on AWS. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">AWS Service Catalog
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
