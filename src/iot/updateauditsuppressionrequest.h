// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAUDITSUPPRESSIONREQUEST_H
#define QTAWS_UPDATEAUDITSUPPRESSIONREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class UpdateAuditSuppressionRequestPrivate;

class QTAWSIOT_EXPORT UpdateAuditSuppressionRequest : public IoTRequest {

public:
    UpdateAuditSuppressionRequest(const UpdateAuditSuppressionRequest &other);
    UpdateAuditSuppressionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAuditSuppressionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
