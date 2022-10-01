// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTONDEMANDREPLICATIONRUNREQUEST_H
#define QTAWS_STARTONDEMANDREPLICATIONRUNREQUEST_H

#include "smsrequest.h"

namespace QtAws {
namespace Sms {

class StartOnDemandReplicationRunRequestPrivate;

class QTAWSSMS_EXPORT StartOnDemandReplicationRunRequest : public SmsRequest {

public:
    StartOnDemandReplicationRunRequest(const StartOnDemandReplicationRunRequest &other);
    StartOnDemandReplicationRunRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartOnDemandReplicationRunRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
