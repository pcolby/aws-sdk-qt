// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPOLICYVERSIONREQUEST_H
#define QTAWS_GETPOLICYVERSIONREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class GetPolicyVersionRequestPrivate;

class QTAWSIOT_EXPORT GetPolicyVersionRequest : public IoTRequest {

public:
    GetPolicyVersionRequest(const GetPolicyVersionRequest &other);
    GetPolicyVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPolicyVersionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
