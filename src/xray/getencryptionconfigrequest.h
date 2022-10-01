// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENCRYPTIONCONFIGREQUEST_H
#define QTAWS_GETENCRYPTIONCONFIGREQUEST_H

#include "xrayrequest.h"

namespace QtAws {
namespace XRay {

class GetEncryptionConfigRequestPrivate;

class QTAWSXRAY_EXPORT GetEncryptionConfigRequest : public XRayRequest {

public:
    GetEncryptionConfigRequest(const GetEncryptionConfigRequest &other);
    GetEncryptionConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEncryptionConfigRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
