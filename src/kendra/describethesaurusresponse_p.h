// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETHESAURUSRESPONSE_P_H
#define QTAWS_DESCRIBETHESAURUSRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class DescribeThesaurusResponse;

class DescribeThesaurusResponsePrivate : public KendraResponsePrivate {

public:

    explicit DescribeThesaurusResponsePrivate(DescribeThesaurusResponse * const q);

    void parseDescribeThesaurusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeThesaurusResponse)
    Q_DISABLE_COPY(DescribeThesaurusResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
