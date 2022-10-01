// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPREPLICATIONCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETEAPPREPLICATIONCONFIGURATIONREQUEST_P_H

#include "smsrequest_p.h"
#include "deleteappreplicationconfigurationrequest.h"

namespace QtAws {
namespace Sms {

class DeleteAppReplicationConfigurationRequest;

class DeleteAppReplicationConfigurationRequestPrivate : public SmsRequestPrivate {

public:
    DeleteAppReplicationConfigurationRequestPrivate(const SmsRequest::Action action,
                                   DeleteAppReplicationConfigurationRequest * const q);
    DeleteAppReplicationConfigurationRequestPrivate(const DeleteAppReplicationConfigurationRequestPrivate &other,
                                   DeleteAppReplicationConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAppReplicationConfigurationRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
