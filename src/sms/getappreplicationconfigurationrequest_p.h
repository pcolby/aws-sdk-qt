// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPREPLICATIONCONFIGURATIONREQUEST_P_H
#define QTAWS_GETAPPREPLICATIONCONFIGURATIONREQUEST_P_H

#include "smsrequest_p.h"
#include "getappreplicationconfigurationrequest.h"

namespace QtAws {
namespace Sms {

class GetAppReplicationConfigurationRequest;

class GetAppReplicationConfigurationRequestPrivate : public SmsRequestPrivate {

public:
    GetAppReplicationConfigurationRequestPrivate(const SmsRequest::Action action,
                                   GetAppReplicationConfigurationRequest * const q);
    GetAppReplicationConfigurationRequestPrivate(const GetAppReplicationConfigurationRequestPrivate &other,
                                   GetAppReplicationConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAppReplicationConfigurationRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
