// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    //Q_D(DeleteTagsForDomainResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53Domains
} // namespace QtAws
