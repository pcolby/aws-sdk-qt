// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEPOLICYTYPEREQUEST_H
#define QTAWS_DISABLEPOLICYTYPEREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class DisablePolicyTypeRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT DisablePolicyTypeRequest : public OrganizationsRequest {

public:
    DisablePolicyTypeRequest(const DisablePolicyTypeRequest &other);
    DisablePolicyTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisablePolicyTypeRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
