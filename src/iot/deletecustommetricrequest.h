// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMMETRICREQUEST_H
#define QTAWS_DELETECUSTOMMETRICREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DeleteCustomMetricRequestPrivate;

class QTAWSIOT_EXPORT DeleteCustomMetricRequest : public IoTRequest {

public:
    DeleteCustomMetricRequest(const DeleteCustomMetricRequest &other);
    DeleteCustomMetricRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCustomMetricRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
