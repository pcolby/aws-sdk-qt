// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEKEYROTATIONREQUEST_H
#define QTAWS_ENABLEKEYROTATIONREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class EnableKeyRotationRequestPrivate;

class QTAWSKMS_EXPORT EnableKeyRotationRequest : public KmsRequest {

public:
    EnableKeyRotationRequest(const EnableKeyRotationRequest &other);
    EnableKeyRotationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableKeyRotationRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
