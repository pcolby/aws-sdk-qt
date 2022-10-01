// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAUDITMITIGATIONACTIONSEXECUTIONSREQUEST_H
#define QTAWS_LISTAUDITMITIGATIONACTIONSEXECUTIONSREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListAuditMitigationActionsExecutionsRequestPrivate;

class QTAWSIOT_EXPORT ListAuditMitigationActionsExecutionsRequest : public IoTRequest {

public:
    ListAuditMitigationActionsExecutionsRequest(const ListAuditMitigationActionsExecutionsRequest &other);
    ListAuditMitigationActionsExecutionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAuditMitigationActionsExecutionsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
