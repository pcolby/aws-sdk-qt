// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTONDEMANDAPPREPLICATIONREQUEST_H
#define QTAWS_STARTONDEMANDAPPREPLICATIONREQUEST_H

#include "smsrequest.h"

namespace QtAws {
namespace Sms {

class StartOnDemandAppReplicationRequestPrivate;

class QTAWSSMS_EXPORT StartOnDemandAppReplicationRequest : public SmsRequest {

public:
    StartOnDemandAppReplicationRequest(const StartOnDemandAppReplicationRequest &other);
    StartOnDemandAppReplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartOnDemandAppReplicationRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
