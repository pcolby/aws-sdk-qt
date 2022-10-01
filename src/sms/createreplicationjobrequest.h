// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPLICATIONJOBREQUEST_H
#define QTAWS_CREATEREPLICATIONJOBREQUEST_H

#include "smsrequest.h"

namespace QtAws {
namespace Sms {

class CreateReplicationJobRequestPrivate;

class QTAWSSMS_EXPORT CreateReplicationJobRequest : public SmsRequest {

public:
    CreateReplicationJobRequest(const CreateReplicationJobRequest &other);
    CreateReplicationJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateReplicationJobRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
