// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELDETECTMITIGATIONACTIONSTASKREQUEST_H
#define QTAWS_CANCELDETECTMITIGATIONACTIONSTASKREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class CancelDetectMitigationActionsTaskRequestPrivate;

class QTAWSIOT_EXPORT CancelDetectMitigationActionsTaskRequest : public IoTRequest {

public:
    CancelDetectMitigationActionsTaskRequest(const CancelDetectMitigationActionsTaskRequest &other);
    CancelDetectMitigationActionsTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelDetectMitigationActionsTaskRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
