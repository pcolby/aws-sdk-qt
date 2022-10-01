// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELJOBEXECUTIONREQUEST_H
#define QTAWS_CANCELJOBEXECUTIONREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class CancelJobExecutionRequestPrivate;

class QTAWSIOT_EXPORT CancelJobExecutionRequest : public IoTRequest {

public:
    CancelJobExecutionRequest(const CancelJobExecutionRequest &other);
    CancelJobExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelJobExecutionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
