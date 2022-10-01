// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMMETRICREQUEST_H
#define QTAWS_CREATECUSTOMMETRICREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class CreateCustomMetricRequestPrivate;

class QTAWSIOT_EXPORT CreateCustomMetricRequest : public IoTRequest {

public:
    CreateCustomMetricRequest(const CreateCustomMetricRequest &other);
    CreateCustomMetricRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCustomMetricRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
