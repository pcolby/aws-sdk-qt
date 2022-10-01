// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPLICATIONRUNSREQUEST_H
#define QTAWS_GETREPLICATIONRUNSREQUEST_H

#include "smsrequest.h"

namespace QtAws {
namespace Sms {

class GetReplicationRunsRequestPrivate;

class QTAWSSMS_EXPORT GetReplicationRunsRequest : public SmsRequest {

public:
    GetReplicationRunsRequest(const GetReplicationRunsRequest &other);
    GetReplicationRunsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetReplicationRunsRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
