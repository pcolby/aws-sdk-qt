// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPOLICYVERSIONREQUEST_H
#define QTAWS_CREATEPOLICYVERSIONREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class CreatePolicyVersionRequestPrivate;

class QTAWSIOT_EXPORT CreatePolicyVersionRequest : public IoTRequest {

public:
    CreatePolicyVersionRequest(const CreatePolicyVersionRequest &other);
    CreatePolicyVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePolicyVersionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
