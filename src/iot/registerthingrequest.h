// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERTHINGREQUEST_H
#define QTAWS_REGISTERTHINGREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class RegisterThingRequestPrivate;

class QTAWSIOT_EXPORT RegisterThingRequest : public IoTRequest {

public:
    RegisterThingRequest(const RegisterThingRequest &other);
    RegisterThingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterThingRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
