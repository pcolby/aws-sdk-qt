// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEHEALTHSERVICEACCESSFORORGANIZATIONREQUEST_H
#define QTAWS_ENABLEHEALTHSERVICEACCESSFORORGANIZATIONREQUEST_H

#include "healthrequest.h"

namespace QtAws {
namespace Health {

class EnableHealthServiceAccessForOrganizationRequestPrivate;

class QTAWSHEALTH_EXPORT EnableHealthServiceAccessForOrganizationRequest : public HealthRequest {

public:
    EnableHealthServiceAccessForOrganizationRequest(const EnableHealthServiceAccessForOrganizationRequest &other);
    EnableHealthServiceAccessForOrganizationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableHealthServiceAccessForOrganizationRequest)

};

} // namespace Health
} // namespace QtAws

#endif
