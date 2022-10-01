// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPVALIDATIONCONFIGURATIONREQUEST_H
#define QTAWS_GETAPPVALIDATIONCONFIGURATIONREQUEST_H

#include "smsrequest.h"

namespace QtAws {
namespace Sms {

class GetAppValidationConfigurationRequestPrivate;

class QTAWSSMS_EXPORT GetAppValidationConfigurationRequest : public SmsRequest {

public:
    GetAppValidationConfigurationRequest(const GetAppValidationConfigurationRequest &other);
    GetAppValidationConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAppValidationConfigurationRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
