// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECUSTOMDOMAINREQUEST_H
#define QTAWS_DISASSOCIATECUSTOMDOMAINREQUEST_H

#include "apprunnerrequest.h"

namespace QtAws {
namespace AppRunner {

class DisassociateCustomDomainRequestPrivate;

class QTAWSAPPRUNNER_EXPORT DisassociateCustomDomainRequest : public AppRunnerRequest {

public:
    DisassociateCustomDomainRequest(const DisassociateCustomDomainRequest &other);
    DisassociateCustomDomainRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateCustomDomainRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
