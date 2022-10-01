// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROTATEENCRYPTIONKEYRESPONSE_P_H
#define QTAWS_ROTATEENCRYPTIONKEYRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class RotateEncryptionKeyResponse;

class RotateEncryptionKeyResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit RotateEncryptionKeyResponsePrivate(RotateEncryptionKeyResponse * const q);

    void parseRotateEncryptionKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RotateEncryptionKeyResponse)
    Q_DISABLE_COPY(RotateEncryptionKeyResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
