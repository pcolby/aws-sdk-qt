// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDOMAINRESPONSE_H
#define QTAWS_ASSOCIATEDOMAINRESPONSE_H

#include "worklinkresponse.h"
#include "associatedomainrequest.h"

namespace QtAws {
namespace WorkLink {

class AssociateDomainResponsePrivate;

class QTAWSWORKLINK_EXPORT AssociateDomainResponse : public WorkLinkResponse {
    Q_OBJECT

public:
    AssociateDomainResponse(const AssociateDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateDomainResponse)
    Q_DISABLE_COPY(AssociateDomainResponse)

};

} // namespace WorkLink
} // namespace QtAws

#endif
