// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETAGSFORDOMAINRESPONSE_H
#define QTAWS_DELETETAGSFORDOMAINRESPONSE_H

#include "route53domainsresponse.h"
#include "deletetagsfordomainrequest.h"

namespace QtAws {
namespace Route53Domains {

class DeleteTagsForDomainResponsePrivate;

class QTAWSROUTE53DOMAINS_EXPORT DeleteTagsForDomainResponse : public Route53DomainsResponse {
    Q_OBJECT

public:
    DeleteTagsForDomainResponse(const DeleteTagsForDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTagsForDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTagsForDomainResponse)
    Q_DISABLE_COPY(DeleteTagsForDomainResponse)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
