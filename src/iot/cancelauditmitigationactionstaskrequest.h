// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELAUDITMITIGATIONACTIONSTASKREQUEST_H
#define QTAWS_CANCELAUDITMITIGATIONACTIONSTASKREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class CancelAuditMitigationActionsTaskRequestPrivate;

class QTAWSIOT_EXPORT CancelAuditMitigationActionsTaskRequest : public IoTRequest {

public:
    CancelAuditMitigationActionsTaskRequest(const CancelAuditMitigationActionsTaskRequest &other);
    CancelAuditMitigationActionsTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelAuditMitigationActionsTaskRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
