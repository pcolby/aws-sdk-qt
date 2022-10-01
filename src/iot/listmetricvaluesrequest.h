// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMETRICVALUESREQUEST_H
#define QTAWS_LISTMETRICVALUESREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListMetricValuesRequestPrivate;

class QTAWSIOT_EXPORT ListMetricValuesRequest : public IoTRequest {

public:
    ListMetricValuesRequest(const ListMetricValuesRequest &other);
    ListMetricValuesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMetricValuesRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
