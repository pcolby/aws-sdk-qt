// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAVAILABILITYCONFIGURATIONREQUEST_H
#define QTAWS_CREATEAVAILABILITYCONFIGURATIONREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class CreateAvailabilityConfigurationRequestPrivate;

class QTAWSWORKMAIL_EXPORT CreateAvailabilityConfigurationRequest : public WorkMailRequest {

public:
    CreateAvailabilityConfigurationRequest(const CreateAvailabilityConfigurationRequest &other);
    CreateAvailabilityConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAvailabilityConfigurationRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
