// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAUDITFINDINGSREQUEST_H
#define QTAWS_LISTAUDITFINDINGSREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListAuditFindingsRequestPrivate;

class QTAWSIOT_EXPORT ListAuditFindingsRequest : public IoTRequest {

public:
    ListAuditFindingsRequest(const ListAuditFindingsRequest &other);
    ListAuditFindingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAuditFindingsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
