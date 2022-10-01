// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPREPLICATIONCONFIGURATIONREQUEST_H
#define QTAWS_DELETEAPPREPLICATIONCONFIGURATIONREQUEST_H

#include "smsrequest.h"

namespace QtAws {
namespace Sms {

class DeleteAppReplicationConfigurationRequestPrivate;

class QTAWSSMS_EXPORT DeleteAppReplicationConfigurationRequest : public SmsRequest {

public:
    DeleteAppReplicationConfigurationRequest(const DeleteAppReplicationConfigurationRequest &other);
    DeleteAppReplicationConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAppReplicationConfigurationRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
