// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPVALIDATIONCONFIGURATIONREQUEST_H
#define QTAWS_DELETEAPPVALIDATIONCONFIGURATIONREQUEST_H

#include "smsrequest.h"

namespace QtAws {
namespace Sms {

class DeleteAppValidationConfigurationRequestPrivate;

class QTAWSSMS_EXPORT DeleteAppValidationConfigurationRequest : public SmsRequest {

public:
    DeleteAppValidationConfigurationRequest(const DeleteAppValidationConfigurationRequest &other);
    DeleteAppValidationConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAppValidationConfigurationRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
