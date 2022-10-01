// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFLEETMETRICSREQUEST_H
#define QTAWS_LISTFLEETMETRICSREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListFleetMetricsRequestPrivate;

class QTAWSIOT_EXPORT ListFleetMetricsRequest : public IoTRequest {

public:
    ListFleetMetricsRequest(const ListFleetMetricsRequest &other);
    ListFleetMetricsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFleetMetricsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
