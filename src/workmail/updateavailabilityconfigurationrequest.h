// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAVAILABILITYCONFIGURATIONREQUEST_H
#define QTAWS_UPDATEAVAILABILITYCONFIGURATIONREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class UpdateAvailabilityConfigurationRequestPrivate;

class QTAWSWORKMAIL_EXPORT UpdateAvailabilityConfigurationRequest : public WorkMailRequest {

public:
    UpdateAvailabilityConfigurationRequest(const UpdateAvailabilityConfigurationRequest &other);
    UpdateAvailabilityConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAvailabilityConfigurationRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
