// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEDOMAINREQUEST_H
#define QTAWS_DISASSOCIATEDOMAINREQUEST_H

#include "worklinkrequest.h"

namespace QtAws {
namespace WorkLink {

class DisassociateDomainRequestPrivate;

class QTAWSWORKLINK_EXPORT DisassociateDomainRequest : public WorkLinkRequest {

public:
    DisassociateDomainRequest(const DisassociateDomainRequest &other);
    DisassociateDomainRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateDomainRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
