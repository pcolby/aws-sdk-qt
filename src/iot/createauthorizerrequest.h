// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAUTHORIZERREQUEST_H
#define QTAWS_CREATEAUTHORIZERREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class CreateAuthorizerRequestPrivate;

class QTAWSIOT_EXPORT CreateAuthorizerRequest : public IoTRequest {

public:
    CreateAuthorizerRequest(const CreateAuthorizerRequest &other);
    CreateAuthorizerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAuthorizerRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
