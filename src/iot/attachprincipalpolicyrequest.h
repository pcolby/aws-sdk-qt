// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHPRINCIPALPOLICYREQUEST_H
#define QTAWS_ATTACHPRINCIPALPOLICYREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class AttachPrincipalPolicyRequestPrivate;

class QTAWSIOT_EXPORT AttachPrincipalPolicyRequest : public IoTRequest {

public:
    AttachPrincipalPolicyRequest(const AttachPrincipalPolicyRequest &other);
    AttachPrincipalPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachPrincipalPolicyRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
