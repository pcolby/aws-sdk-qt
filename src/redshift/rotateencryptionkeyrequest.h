// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROTATEENCRYPTIONKEYREQUEST_H
#define QTAWS_ROTATEENCRYPTIONKEYREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class RotateEncryptionKeyRequestPrivate;

class QTAWSREDSHIFT_EXPORT RotateEncryptionKeyRequest : public RedshiftRequest {

public:
    RotateEncryptionKeyRequest(const RotateEncryptionKeyRequest &other);
    RotateEncryptionKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RotateEncryptionKeyRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
