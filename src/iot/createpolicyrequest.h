// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPOLICYREQUEST_H
#define QTAWS_CREATEPOLICYREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class CreatePolicyRequestPrivate;

class QTAWSIOT_EXPORT CreatePolicyRequest : public IoTRequest {

public:
    CreatePolicyRequest(const CreatePolicyRequest &other);
    CreatePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePolicyRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
