// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELAUDITTASKREQUEST_H
#define QTAWS_CANCELAUDITTASKREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class CancelAuditTaskRequestPrivate;

class QTAWSIOT_EXPORT CancelAuditTaskRequest : public IoTRequest {

public:
    CancelAuditTaskRequest(const CancelAuditTaskRequest &other);
    CancelAuditTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelAuditTaskRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
