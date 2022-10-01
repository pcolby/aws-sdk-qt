// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMMETRICSREQUEST_H
#define QTAWS_LISTCUSTOMMETRICSREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListCustomMetricsRequestPrivate;

class QTAWSIOT_EXPORT ListCustomMetricsRequest : public IoTRequest {

public:
    ListCustomMetricsRequest(const ListCustomMetricsRequest &other);
    ListCustomMetricsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCustomMetricsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
