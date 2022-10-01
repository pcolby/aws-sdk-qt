// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDOMAINREQUEST_H
#define QTAWS_ASSOCIATEDOMAINREQUEST_H

#include "worklinkrequest.h"

namespace QtAws {
namespace WorkLink {

class AssociateDomainRequestPrivate;

class QTAWSWORKLINK_EXPORT AssociateDomainRequest : public WorkLinkRequest {

public:
    AssociateDomainRequest(const AssociateDomainRequest &other);
    AssociateDomainRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateDomainRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
