// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALIASESRESPONSE_P_H
#define QTAWS_LISTALIASESRESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class ListAliasesResponse;

class ListAliasesResponsePrivate : public KmsResponsePrivate {

public:

    explicit ListAliasesResponsePrivate(ListAliasesResponse * const q);

    void parseListAliasesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAliasesResponse)
    Q_DISABLE_COPY(ListAliasesResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif
