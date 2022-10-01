// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLEETMETRICREQUEST_H
#define QTAWS_UPDATEFLEETMETRICREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class UpdateFleetMetricRequestPrivate;

class QTAWSIOT_EXPORT UpdateFleetMetricRequest : public IoTRequest {

public:
    UpdateFleetMetricRequest(const UpdateFleetMetricRequest &other);
    UpdateFleetMetricRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFleetMetricRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
