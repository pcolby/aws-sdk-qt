// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREMEDIATIONCONFIGURATIONREQUEST_H
#define QTAWS_DELETEREMEDIATIONCONFIGURATIONREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteRemediationConfigurationRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT DeleteRemediationConfigurationRequest : public ConfigServiceRequest {

public:
    DeleteRemediationConfigurationRequest(const DeleteRemediationConfigurationRequest &other);
    DeleteRemediationConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRemediationConfigurationRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
