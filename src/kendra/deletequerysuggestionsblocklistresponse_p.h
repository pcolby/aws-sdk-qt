// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEQUERYSUGGESTIONSBLOCKLISTRESPONSE_P_H
#define QTAWS_DELETEQUERYSUGGESTIONSBLOCKLISTRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class DeleteQuerySuggestionsBlockListResponse;

class DeleteQuerySuggestionsBlockListResponsePrivate : public KendraResponsePrivate {

public:

    explicit DeleteQuerySuggestionsBlockListResponsePrivate(DeleteQuerySuggestionsBlockListResponse * const q);

    void parseDeleteQuerySuggestionsBlockListResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteQuerySuggestionsBlockListResponse)
    Q_DISABLE_COPY(DeleteQuerySuggestionsBlockListResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
