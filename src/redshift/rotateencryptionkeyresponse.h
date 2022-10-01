// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROTATEENCRYPTIONKEYRESPONSE_H
#define QTAWS_ROTATEENCRYPTIONKEYRESPONSE_H

#include "redshiftresponse.h"
#include "rotateencryptionkeyrequest.h"

namespace QtAws {
namespace Redshift {

class RotateEncryptionKeyResponsePrivate;

class QTAWSREDSHIFT_EXPORT RotateEncryptionKeyResponse : public RedshiftResponse {
    Q_OBJECT

public:
    RotateEncryptionKeyResponse(const RotateEncryptionKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RotateEncryptionKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RotateEncryptionKeyResponse)
    Q_DISABLE_COPY(RotateEncryptionKeyResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
