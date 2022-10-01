// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDETECTMITIGATIONACTIONSTASKREQUEST_H
#define QTAWS_STARTDETECTMITIGATIONACTIONSTASKREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class StartDetectMitigationActionsTaskRequestPrivate;

class QTAWSIOT_EXPORT StartDetectMitigationActionsTaskRequest : public IoTRequest {

public:
    StartDetectMitigationActionsTaskRequest(const StartDetectMitigationActionsTaskRequest &other);
    StartDetectMitigationActionsTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartDetectMitigationActionsTaskRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
