// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTATEMENTRESPONSE_P_H
#define QTAWS_DESCRIBESTATEMENTRESPONSE_P_H

#include "redshiftdataresponse_p.h"

namespace QtAws {
namespace RedshiftData {

class DescribeStatementResponse;

class DescribeStatementResponsePrivate : public RedshiftDataResponsePrivate {

public:

    explicit DescribeStatementResponsePrivate(DescribeStatementResponse * const q);

    void parseDescribeStatementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeStatementResponse)
    Q_DISABLE_COPY(DescribeStatementResponsePrivate)

};

} // namespace RedshiftData
} // namespace QtAws

#endif
