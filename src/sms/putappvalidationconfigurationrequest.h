// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAPPVALIDATIONCONFIGURATIONREQUEST_H
#define QTAWS_PUTAPPVALIDATIONCONFIGURATIONREQUEST_H

#include "smsrequest.h"

namespace QtAws {
namespace Sms {

class PutAppValidationConfigurationRequestPrivate;

class QTAWSSMS_EXPORT PutAppValidationConfigurationRequest : public SmsRequest {

public:
    PutAppValidationConfigurationRequest(const PutAppValidationConfigurationRequest &other);
    PutAppValidationConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAppValidationConfigurationRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
