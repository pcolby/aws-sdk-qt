// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUERYSUGGESTIONSCONFIGRESPONSE_P_H
#define QTAWS_UPDATEQUERYSUGGESTIONSCONFIGRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class UpdateQuerySuggestionsConfigResponse;

class UpdateQuerySuggestionsConfigResponsePrivate : public KendraResponsePrivate {

public:

    explicit UpdateQuerySuggestionsConfigResponsePrivate(UpdateQuerySuggestionsConfigResponse * const q);

    void parseUpdateQuerySuggestionsConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateQuerySuggestionsConfigResponse)
    Q_DISABLE_COPY(UpdateQuerySuggestionsConfigResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
