// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORVAULTRESPONSE_P_H
#define QTAWS_LISTTAGSFORVAULTRESPONSE_P_H

#include "glacierresponse_p.h"

namespace QtAws {
namespace Glacier {

class ListTagsForVaultResponse;

class ListTagsForVaultResponsePrivate : public GlacierResponsePrivate {

public:

    explicit ListTagsForVaultResponsePrivate(ListTagsForVaultResponse * const q);

    void parseListTagsForVaultResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTagsForVaultResponse)
    Q_DISABLE_COPY(ListTagsForVaultResponsePrivate)

};

} // namespace Glacier
} // namespace QtAws

#endif
