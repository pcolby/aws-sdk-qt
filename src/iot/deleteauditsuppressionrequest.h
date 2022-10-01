// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAUDITSUPPRESSIONREQUEST_H
#define QTAWS_DELETEAUDITSUPPRESSIONREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DeleteAuditSuppressionRequestPrivate;

class QTAWSIOT_EXPORT DeleteAuditSuppressionRequest : public IoTRequest {

public:
    DeleteAuditSuppressionRequest(const DeleteAuditSuppressionRequest &other);
    DeleteAuditSuppressionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAuditSuppressionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
