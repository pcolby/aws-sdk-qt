// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTAUDITMITIGATIONACTIONSTASKREQUEST_H
#define QTAWS_STARTAUDITMITIGATIONACTIONSTASKREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class StartAuditMitigationActionsTaskRequestPrivate;

class QTAWSIOT_EXPORT StartAuditMitigationActionsTaskRequest : public IoTRequest {

public:
    StartAuditMitigationActionsTaskRequest(const StartAuditMitigationActionsTaskRequest &other);
    StartAuditMitigationActionsTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartAuditMitigationActionsTaskRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
