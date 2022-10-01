// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVAULTRESPONSE_P_H
#define QTAWS_DELETEVAULTRESPONSE_P_H

#include "glacierresponse_p.h"

namespace QtAws {
namespace Glacier {

class DeleteVaultResponse;

class DeleteVaultResponsePrivate : public GlacierResponsePrivate {

public:

    explicit DeleteVaultResponsePrivate(DeleteVaultResponse * const q);

    void parseDeleteVaultResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVaultResponse)
    Q_DISABLE_COPY(DeleteVaultResponsePrivate)

};

} // namespace Glacier
} // namespace QtAws

#endif
