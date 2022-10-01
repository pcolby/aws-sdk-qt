// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVAULTRESPONSE_P_H
#define QTAWS_CREATEVAULTRESPONSE_P_H

#include "glacierresponse_p.h"

namespace QtAws {
namespace Glacier {

class CreateVaultResponse;

class CreateVaultResponsePrivate : public GlacierResponsePrivate {

public:

    explicit CreateVaultResponsePrivate(CreateVaultResponse * const q);

    void parseCreateVaultResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateVaultResponse)
    Q_DISABLE_COPY(CreateVaultResponsePrivate)

};

} // namespace Glacier
} // namespace QtAws

#endif
