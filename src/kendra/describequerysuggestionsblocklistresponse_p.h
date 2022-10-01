// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEQUERYSUGGESTIONSBLOCKLISTRESPONSE_P_H
#define QTAWS_DESCRIBEQUERYSUGGESTIONSBLOCKLISTRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class DescribeQuerySuggestionsBlockListResponse;

class DescribeQuerySuggestionsBlockListResponsePrivate : public KendraResponsePrivate {

public:

    explicit DescribeQuerySuggestionsBlockListResponsePrivate(DescribeQuerySuggestionsBlockListResponse * const q);

    void parseDescribeQuerySuggestionsBlockListResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeQuerySuggestionsBlockListResponse)
    Q_DISABLE_COPY(DescribeQuerySuggestionsBlockListResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
