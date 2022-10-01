// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETABLERESPONSE_P_H
#define QTAWS_DESCRIBETABLERESPONSE_P_H

#include "redshiftdataresponse_p.h"

namespace QtAws {
namespace RedshiftData {

class DescribeTableResponse;

class DescribeTableResponsePrivate : public RedshiftDataResponsePrivate {

public:

    explicit DescribeTableResponsePrivate(DescribeTableResponse * const q);

    void parseDescribeTableResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTableResponse)
    Q_DISABLE_COPY(DescribeTableResponsePrivate)

};

} // namespace RedshiftData
} // namespace QtAws

#endif
