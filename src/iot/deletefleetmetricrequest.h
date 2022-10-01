// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLEETMETRICREQUEST_H
#define QTAWS_DELETEFLEETMETRICREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DeleteFleetMetricRequestPrivate;

class QTAWSIOT_EXPORT DeleteFleetMetricRequest : public IoTRequest {

public:
    DeleteFleetMetricRequest(const DeleteFleetMetricRequest &other);
    DeleteFleetMetricRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFleetMetricRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
