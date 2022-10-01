// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTONDEMANDAUDITTASKREQUEST_H
#define QTAWS_STARTONDEMANDAUDITTASKREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class StartOnDemandAuditTaskRequestPrivate;

class QTAWSIOT_EXPORT StartOnDemandAuditTaskRequest : public IoTRequest {

public:
    StartOnDemandAuditTaskRequest(const StartOnDemandAuditTaskRequest &other);
    StartOnDemandAuditTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartOnDemandAuditTaskRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
