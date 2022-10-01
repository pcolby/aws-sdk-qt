// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGLOBALCLUSTERSRESPONSE_P_H
#define QTAWS_DESCRIBEGLOBALCLUSTERSRESPONSE_P_H

#include "neptuneresponse_p.h"

namespace QtAws {
namespace Neptune {

class DescribeGlobalClustersResponse;

class DescribeGlobalClustersResponsePrivate : public NeptuneResponsePrivate {

public:

    explicit DescribeGlobalClustersResponsePrivate(DescribeGlobalClustersResponse * const q);

    void parseDescribeGlobalClustersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeGlobalClustersResponse)
    Q_DISABLE_COPY(DescribeGlobalClustersResponsePrivate)

};

} // namespace Neptune
} // namespace QtAws

#endif
