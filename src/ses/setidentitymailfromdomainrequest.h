// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETIDENTITYMAILFROMDOMAINREQUEST_H
#define QTAWS_SETIDENTITYMAILFROMDOMAINREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class SetIdentityMailFromDomainRequestPrivate;

class QTAWSSES_EXPORT SetIdentityMailFromDomainRequest : public SesRequest {

public:
    SetIdentityMailFromDomainRequest(const SetIdentityMailFromDomainRequest &other);
    SetIdentityMailFromDomainRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetIdentityMailFromDomainRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
