// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAUDITMITIGATIONACTIONSTASKSREQUEST_H
#define QTAWS_LISTAUDITMITIGATIONACTIONSTASKSREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListAuditMitigationActionsTasksRequestPrivate;

class QTAWSIOT_EXPORT ListAuditMitigationActionsTasksRequest : public IoTRequest {

public:
    ListAuditMitigationActionsTasksRequest(const ListAuditMitigationActionsTasksRequest &other);
    ListAuditMitigationActionsTasksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAuditMitigationActionsTasksRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
