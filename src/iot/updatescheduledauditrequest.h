// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESCHEDULEDAUDITREQUEST_H
#define QTAWS_UPDATESCHEDULEDAUDITREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class UpdateScheduledAuditRequestPrivate;

class QTAWSIOT_EXPORT UpdateScheduledAuditRequest : public IoTRequest {

public:
    UpdateScheduledAuditRequest(const UpdateScheduledAuditRequest &other);
    UpdateScheduledAuditRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateScheduledAuditRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
