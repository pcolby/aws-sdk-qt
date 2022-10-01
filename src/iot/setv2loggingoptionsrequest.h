// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETV2LOGGINGOPTIONSREQUEST_H
#define QTAWS_SETV2LOGGINGOPTIONSREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class SetV2LoggingOptionsRequestPrivate;

class QTAWSIOT_EXPORT SetV2LoggingOptionsRequest : public IoTRequest {

public:
    SetV2LoggingOptionsRequest(const SetV2LoggingOptionsRequest &other);
    SetV2LoggingOptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetV2LoggingOptionsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
