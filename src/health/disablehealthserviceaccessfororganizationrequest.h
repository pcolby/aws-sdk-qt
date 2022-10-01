// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEHEALTHSERVICEACCESSFORORGANIZATIONREQUEST_H
#define QTAWS_DISABLEHEALTHSERVICEACCESSFORORGANIZATIONREQUEST_H

#include "healthrequest.h"

namespace QtAws {
namespace Health {

class DisableHealthServiceAccessForOrganizationRequestPrivate;

class QTAWSHEALTH_EXPORT DisableHealthServiceAccessForOrganizationRequest : public HealthRequest {

public:
    DisableHealthServiceAccessForOrganizationRequest(const DisableHealthServiceAccessForOrganizationRequest &other);
    DisableHealthServiceAccessForOrganizationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableHealthServiceAccessForOrganizationRequest)

};

} // namespace Health
} // namespace QtAws

#endif
