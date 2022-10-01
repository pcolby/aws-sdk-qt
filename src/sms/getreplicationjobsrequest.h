// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPLICATIONJOBSREQUEST_H
#define QTAWS_GETREPLICATIONJOBSREQUEST_H

#include "smsrequest.h"

namespace QtAws {
namespace Sms {

class GetReplicationJobsRequestPrivate;

class QTAWSSMS_EXPORT GetReplicationJobsRequest : public SmsRequest {

public:
    GetReplicationJobsRequest(const GetReplicationJobsRequest &other);
    GetReplicationJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetReplicationJobsRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
