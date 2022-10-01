// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETKEYROTATIONSTATUSREQUEST_H
#define QTAWS_GETKEYROTATIONSTATUSREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class GetKeyRotationStatusRequestPrivate;

class QTAWSKMS_EXPORT GetKeyRotationStatusRequest : public KmsRequest {

public:
    GetKeyRotationStatusRequest(const GetKeyRotationStatusRequest &other);
    GetKeyRotationStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetKeyRotationStatusRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
