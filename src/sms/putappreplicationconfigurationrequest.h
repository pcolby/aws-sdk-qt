// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAPPREPLICATIONCONFIGURATIONREQUEST_H
#define QTAWS_PUTAPPREPLICATIONCONFIGURATIONREQUEST_H

#include "smsrequest.h"

namespace QtAws {
namespace Sms {

class PutAppReplicationConfigurationRequestPrivate;

class QTAWSSMS_EXPORT PutAppReplicationConfigurationRequest : public SmsRequest {

public:
    PutAppReplicationConfigurationRequest(const PutAppReplicationConfigurationRequest &other);
    PutAppReplicationConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAppReplicationConfigurationRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
