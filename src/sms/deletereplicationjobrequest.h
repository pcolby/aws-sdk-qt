// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPLICATIONJOBREQUEST_H
#define QTAWS_DELETEREPLICATIONJOBREQUEST_H

#include "smsrequest.h"

namespace QtAws {
namespace Sms {

class DeleteReplicationJobRequestPrivate;

class QTAWSSMS_EXPORT DeleteReplicationJobRequest : public SmsRequest {

public:
    DeleteReplicationJobRequest(const DeleteReplicationJobRequest &other);
    DeleteReplicationJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteReplicationJobRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
