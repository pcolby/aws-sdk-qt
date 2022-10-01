// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMPORTRESPONSE_P_H
#define QTAWS_DESCRIBEIMPORTRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeImportResponse;

class DescribeImportResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit DescribeImportResponsePrivate(DescribeImportResponse * const q);

    void parseDescribeImportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeImportResponse)
    Q_DISABLE_COPY(DescribeImportResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
