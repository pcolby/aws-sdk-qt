// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEENCRYPTIONCONFIGRESPONSE_P_H
#define QTAWS_ASSOCIATEENCRYPTIONCONFIGRESPONSE_P_H

#include "eksresponse_p.h"

namespace QtAws {
namespace Eks {

class AssociateEncryptionConfigResponse;

class AssociateEncryptionConfigResponsePrivate : public EksResponsePrivate {

public:

    explicit AssociateEncryptionConfigResponsePrivate(AssociateEncryptionConfigResponse * const q);

    void parseAssociateEncryptionConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateEncryptionConfigResponse)
    Q_DISABLE_COPY(AssociateEncryptionConfigResponsePrivate)

};

} // namespace Eks
} // namespace QtAws

#endif
