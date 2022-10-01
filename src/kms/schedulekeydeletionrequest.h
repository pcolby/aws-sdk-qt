// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SCHEDULEKEYDELETIONREQUEST_H
#define QTAWS_SCHEDULEKEYDELETIONREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class ScheduleKeyDeletionRequestPrivate;

class QTAWSKMS_EXPORT ScheduleKeyDeletionRequest : public KmsRequest {

public:
    ScheduleKeyDeletionRequest(const ScheduleKeyDeletionRequest &other);
    ScheduleKeyDeletionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ScheduleKeyDeletionRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
