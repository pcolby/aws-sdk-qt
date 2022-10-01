// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTENCRYPTIONCONFIGREQUEST_H
#define QTAWS_PUTENCRYPTIONCONFIGREQUEST_H

#include "xrayrequest.h"

namespace QtAws {
namespace XRay {

class PutEncryptionConfigRequestPrivate;

class QTAWSXRAY_EXPORT PutEncryptionConfigRequest : public XRayRequest {

public:
    PutEncryptionConfigRequest(const PutEncryptionConfigRequest &other);
    PutEncryptionConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutEncryptionConfigRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
