// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECUSTOMDOMAINREQUEST_H
#define QTAWS_ASSOCIATECUSTOMDOMAINREQUEST_H

#include "apprunnerrequest.h"

namespace QtAws {
namespace AppRunner {

class AssociateCustomDomainRequestPrivate;

class QTAWSAPPRUNNER_EXPORT AssociateCustomDomainRequest : public AppRunnerRequest {

public:
    AssociateCustomDomainRequest(const AssociateCustomDomainRequest &other);
    AssociateCustomDomainRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateCustomDomainRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
