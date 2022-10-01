// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOGGINGOPTIONSREQUEST_H
#define QTAWS_GETLOGGINGOPTIONSREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class GetLoggingOptionsRequestPrivate;

class QTAWSIOT_EXPORT GetLoggingOptionsRequest : public IoTRequest {

public:
    GetLoggingOptionsRequest(const GetLoggingOptionsRequest &other);
    GetLoggingOptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLoggingOptionsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
