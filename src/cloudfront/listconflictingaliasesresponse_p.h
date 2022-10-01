// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFLICTINGALIASESRESPONSE_P_H
#define QTAWS_LISTCONFLICTINGALIASESRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class ListConflictingAliasesResponse;

class ListConflictingAliasesResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit ListConflictingAliasesResponsePrivate(ListConflictingAliasesResponse * const q);

    void parseListConflictingAliasesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListConflictingAliasesResponse)
    Q_DISABLE_COPY(ListConflictingAliasesResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
