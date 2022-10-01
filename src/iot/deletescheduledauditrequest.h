// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEDULEDAUDITREQUEST_H
#define QTAWS_DELETESCHEDULEDAUDITREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DeleteScheduledAuditRequestPrivate;

class QTAWSIOT_EXPORT DeleteScheduledAuditRequest : public IoTRequest {

public:
    DeleteScheduledAuditRequest(const DeleteScheduledAuditRequest &other);
    DeleteScheduledAuditRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteScheduledAuditRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
