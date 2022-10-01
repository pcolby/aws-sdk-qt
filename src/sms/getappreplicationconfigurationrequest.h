// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPREPLICATIONCONFIGURATIONREQUEST_H
#define QTAWS_GETAPPREPLICATIONCONFIGURATIONREQUEST_H

#include "smsrequest.h"

namespace QtAws {
namespace Sms {

class GetAppReplicationConfigurationRequestPrivate;

class QTAWSSMS_EXPORT GetAppReplicationConfigurationRequest : public SmsRequest {

public:
    GetAppReplicationConfigurationRequest(const GetAppReplicationConfigurationRequest &other);
    GetAppReplicationConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAppReplicationConfigurationRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
