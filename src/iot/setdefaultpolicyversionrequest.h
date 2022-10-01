// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETDEFAULTPOLICYVERSIONREQUEST_H
#define QTAWS_SETDEFAULTPOLICYVERSIONREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class SetDefaultPolicyVersionRequestPrivate;

class QTAWSIOT_EXPORT SetDefaultPolicyVersionRequest : public IoTRequest {

public:
    SetDefaultPolicyVersionRequest(const SetDefaultPolicyVersionRequest &other);
    SetDefaultPolicyVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetDefaultPolicyVersionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
