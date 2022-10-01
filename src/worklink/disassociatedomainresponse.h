// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEDOMAINRESPONSE_H
#define QTAWS_DISASSOCIATEDOMAINRESPONSE_H

#include "worklinkresponse.h"
#include "disassociatedomainrequest.h"

namespace QtAws {
namespace WorkLink {

class DisassociateDomainResponsePrivate;

class QTAWSWORKLINK_EXPORT DisassociateDomainResponse : public WorkLinkResponse {
    Q_OBJECT

public:
    DisassociateDomainResponse(const DisassociateDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateDomainResponse)
    Q_DISABLE_COPY(DisassociateDomainResponse)

};

} // namespace WorkLink
} // namespace QtAws

#endif
