// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPORTRESPONSE_P_H
#define QTAWS_DESCRIBEEXPORTRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeExportResponse;

class DescribeExportResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit DescribeExportResponsePrivate(DescribeExportResponse * const q);

    void parseDescribeExportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeExportResponse)
    Q_DISABLE_COPY(DescribeExportResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
