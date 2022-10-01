// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPLICATIONJOBREQUEST_H
#define QTAWS_UPDATEREPLICATIONJOBREQUEST_H

#include "smsrequest.h"

namespace QtAws {
namespace Sms {

class UpdateReplicationJobRequestPrivate;

class QTAWSSMS_EXPORT UpdateReplicationJobRequest : public SmsRequest {

public:
    UpdateReplicationJobRequest(const UpdateReplicationJobRequest &other);
    UpdateReplicationJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateReplicationJobRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
