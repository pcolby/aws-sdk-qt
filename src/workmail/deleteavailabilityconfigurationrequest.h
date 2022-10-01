// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAVAILABILITYCONFIGURATIONREQUEST_H
#define QTAWS_DELETEAVAILABILITYCONFIGURATIONREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class DeleteAvailabilityConfigurationRequestPrivate;

class QTAWSWORKMAIL_EXPORT DeleteAvailabilityConfigurationRequest : public WorkMailRequest {

public:
    DeleteAvailabilityConfigurationRequest(const DeleteAvailabilityConfigurationRequest &other);
    DeleteAvailabilityConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAvailabilityConfigurationRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
