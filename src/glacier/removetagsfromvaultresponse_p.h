// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETAGSFROMVAULTRESPONSE_P_H
#define QTAWS_REMOVETAGSFROMVAULTRESPONSE_P_H

#include "glacierresponse_p.h"

namespace QtAws {
namespace Glacier {

class RemoveTagsFromVaultResponse;

class RemoveTagsFromVaultResponsePrivate : public GlacierResponsePrivate {

public:

    explicit RemoveTagsFromVaultResponsePrivate(RemoveTagsFromVaultResponse * const q);

    void parseRemoveTagsFromVaultResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveTagsFromVaultResponse)
    Q_DISABLE_COPY(RemoveTagsFromVaultResponsePrivate)

};

} // namespace Glacier
} // namespace QtAws

#endif
