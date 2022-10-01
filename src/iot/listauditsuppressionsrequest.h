// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAUDITSUPPRESSIONSREQUEST_H
#define QTAWS_LISTAUDITSUPPRESSIONSREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListAuditSuppressionsRequestPrivate;

class QTAWSIOT_EXPORT ListAuditSuppressionsRequest : public IoTRequest {

public:
    ListAuditSuppressionsRequest(const ListAuditSuppressionsRequest &other);
    ListAuditSuppressionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAuditSuppressionsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
