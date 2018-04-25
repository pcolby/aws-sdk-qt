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

#include "deletetagsfordomainresponse.h"
#include "deletetagsfordomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::DeleteTagsForDomainResponse
 * \brief The DeleteTagsForDomainResponse class provides an interace for Route53Domains DeleteTagsForDomain responses.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::deleteTagsForDomain
 */

/*!
 * Constructs a DeleteTagsForDomainResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteTagsForDomainResponse::DeleteTagsForDomainResponse(
        const DeleteTagsForDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new DeleteTagsForDomainResponsePrivate(this), parent)
{
    setRequest(new DeleteTagsForDomainRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteTagsForDomainRequest * DeleteTagsForDomainResponse::request() const
{
    Q_D(const DeleteTagsForDomainResponse);
    return static_cast<const DeleteTagsForDomainRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53Domains DeleteTagsForDomain \a response.
 */
void DeleteTagsForDomainResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteTagsForDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53Domains::DeleteTagsForDomainResponsePrivate
 * \brief The DeleteTagsForDomainResponsePrivate class provides private implementation for DeleteTagsForDomainResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a DeleteTagsForDomainResponsePrivate object with public implementation \a q.
 */
DeleteTagsForDomainResponsePrivate::DeleteTagsForDomainResponsePrivate(
    DeleteTagsForDomainResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * Parses a Route53Domains DeleteTagsForDomain response element from \a xml.
 */
void DeleteTagsForDomainResponsePrivate::parseDeleteTagsForDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTagsForDomainResponse"));
    /// @todo
}

} // namespace Route53Domains
} // namespace QtAws
