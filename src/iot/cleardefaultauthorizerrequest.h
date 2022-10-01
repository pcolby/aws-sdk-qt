// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLEARDEFAULTAUTHORIZERREQUEST_H
#define QTAWS_CLEARDEFAULTAUTHORIZERREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ClearDefaultAuthorizerRequestPrivate;

class QTAWSIOT_EXPORT ClearDefaultAuthorizerRequest : public IoTRequest {

public:
    ClearDefaultAuthorizerRequest(const ClearDefaultAuthorizerRequest &other);
    ClearDefaultAuthorizerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ClearDefaultAuthorizerRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
