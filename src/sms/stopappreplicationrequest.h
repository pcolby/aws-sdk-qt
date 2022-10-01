// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPAPPREPLICATIONREQUEST_H
#define QTAWS_STOPAPPREPLICATIONREQUEST_H

#include "smsrequest.h"

namespace QtAws {
namespace Sms {

class StopAppReplicationRequestPrivate;

class QTAWSSMS_EXPORT StopAppReplicationRequest : public SmsRequest {

public:
    StopAppReplicationRequest(const StopAppReplicationRequest &other);
    StopAppReplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopAppReplicationRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
