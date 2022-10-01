// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCHEDULEDAUDITREQUEST_H
#define QTAWS_CREATESCHEDULEDAUDITREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class CreateScheduledAuditRequestPrivate;

class QTAWSIOT_EXPORT CreateScheduledAuditRequest : public IoTRequest {

public:
    CreateScheduledAuditRequest(const CreateScheduledAuditRequest &other);
    CreateScheduledAuditRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateScheduledAuditRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
