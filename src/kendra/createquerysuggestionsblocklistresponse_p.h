// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEQUERYSUGGESTIONSBLOCKLISTRESPONSE_P_H
#define QTAWS_CREATEQUERYSUGGESTIONSBLOCKLISTRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class CreateQuerySuggestionsBlockListResponse;

class CreateQuerySuggestionsBlockListResponsePrivate : public KendraResponsePrivate {

public:

    explicit CreateQuerySuggestionsBlockListResponsePrivate(CreateQuerySuggestionsBlockListResponse * const q);

    void parseCreateQuerySuggestionsBlockListResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateQuerySuggestionsBlockListResponse)
    Q_DISABLE_COPY(CreateQuerySuggestionsBlockListResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
