// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLEARQUERYSUGGESTIONSRESPONSE_P_H
#define QTAWS_CLEARQUERYSUGGESTIONSRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class ClearQuerySuggestionsResponse;

class ClearQuerySuggestionsResponsePrivate : public KendraResponsePrivate {

public:

    explicit ClearQuerySuggestionsResponsePrivate(ClearQuerySuggestionsResponse * const q);

    void parseClearQuerySuggestionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ClearQuerySuggestionsResponse)
    Q_DISABLE_COPY(ClearQuerySuggestionsResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
