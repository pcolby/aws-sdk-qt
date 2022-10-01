// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAPPREPLICATIONCONFIGURATIONREQUEST_P_H
#define QTAWS_PUTAPPREPLICATIONCONFIGURATIONREQUEST_P_H

#include "smsrequest_p.h"
#include "putappreplicationconfigurationrequest.h"

namespace QtAws {
namespace Sms {

class PutAppReplicationConfigurationRequest;

class PutAppReplicationConfigurationRequestPrivate : public SmsRequestPrivate {

public:
    PutAppReplicationConfigurationRequestPrivate(const SmsRequest::Action action,
                                   PutAppReplicationConfigurationRequest * const q);
    PutAppReplicationConfigurationRequestPrivate(const PutAppReplicationConfigurationRequestPrivate &other,
                                   PutAppReplicationConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutAppReplicationConfigurationRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
