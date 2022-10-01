// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTAPPREPLICATIONREQUEST_H
#define QTAWS_STARTAPPREPLICATIONREQUEST_H

#include "smsrequest.h"

namespace QtAws {
namespace Sms {

class StartAppReplicationRequestPrivate;

class QTAWSSMS_EXPORT StartAppReplicationRequest : public SmsRequest {

public:
    StartAppReplicationRequest(const StartAppReplicationRequest &other);
    StartAppReplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartAppReplicationRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
