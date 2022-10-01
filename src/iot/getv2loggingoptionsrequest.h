// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETV2LOGGINGOPTIONSREQUEST_H
#define QTAWS_GETV2LOGGINGOPTIONSREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class GetV2LoggingOptionsRequestPrivate;

class QTAWSIOT_EXPORT GetV2LoggingOptionsRequest : public IoTRequest {

public:
    GetV2LoggingOptionsRequest(const GetV2LoggingOptionsRequest &other);
    GetV2LoggingOptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetV2LoggingOptionsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
