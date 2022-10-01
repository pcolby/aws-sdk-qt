// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAUTHORIZERREQUEST_H
#define QTAWS_UPDATEAUTHORIZERREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class UpdateAuthorizerRequestPrivate;

class QTAWSIOT_EXPORT UpdateAuthorizerRequest : public IoTRequest {

public:
    UpdateAuthorizerRequest(const UpdateAuthorizerRequest &other);
    UpdateAuthorizerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAuthorizerRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
