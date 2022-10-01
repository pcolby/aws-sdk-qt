// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAUDITSUPPRESSIONREQUEST_H
#define QTAWS_CREATEAUDITSUPPRESSIONREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class CreateAuditSuppressionRequestPrivate;

class QTAWSIOT_EXPORT CreateAuditSuppressionRequest : public IoTRequest {

public:
    CreateAuditSuppressionRequest(const CreateAuditSuppressionRequest &other);
    CreateAuditSuppressionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAuditSuppressionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
