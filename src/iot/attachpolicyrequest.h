// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHPOLICYREQUEST_H
#define QTAWS_ATTACHPOLICYREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class AttachPolicyRequestPrivate;

class QTAWSIOT_EXPORT AttachPolicyRequest : public IoTRequest {

public:
    AttachPolicyRequest(const AttachPolicyRequest &other);
    AttachPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachPolicyRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
