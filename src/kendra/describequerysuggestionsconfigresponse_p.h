// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEQUERYSUGGESTIONSCONFIGRESPONSE_P_H
#define QTAWS_DESCRIBEQUERYSUGGESTIONSCONFIGRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class DescribeQuerySuggestionsConfigResponse;

class DescribeQuerySuggestionsConfigResponsePrivate : public KendraResponsePrivate {

public:

    explicit DescribeQuerySuggestionsConfigResponsePrivate(DescribeQuerySuggestionsConfigResponse * const q);

    void parseDescribeQuerySuggestionsConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeQuerySuggestionsConfigResponse)
    Q_DISABLE_COPY(DescribeQuerySuggestionsConfigResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
