// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEKEYROTATIONREQUEST_H
#define QTAWS_DISABLEKEYROTATIONREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class DisableKeyRotationRequestPrivate;

class QTAWSKMS_EXPORT DisableKeyRotationRequest : public KmsRequest {

public:
    DisableKeyRotationRequest(const DisableKeyRotationRequest &other);
    DisableKeyRotationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableKeyRotationRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
