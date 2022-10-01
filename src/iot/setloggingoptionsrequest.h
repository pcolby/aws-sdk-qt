// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETLOGGINGOPTIONSREQUEST_H
#define QTAWS_SETLOGGINGOPTIONSREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class SetLoggingOptionsRequestPrivate;

class QTAWSIOT_EXPORT SetLoggingOptionsRequest : public IoTRequest {

public:
    SetLoggingOptionsRequest(const SetLoggingOptionsRequest &other);
    SetLoggingOptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetLoggingOptionsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
