// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERSRESPONSE_P_H
#define QTAWS_DESCRIBECLUSTERSRESPONSE_P_H

#include "memorydbresponse_p.h"

namespace QtAws {
namespace MemoryDb {

class DescribeClustersResponse;

class DescribeClustersResponsePrivate : public MemoryDbResponsePrivate {

public:

    explicit DescribeClustersResponsePrivate(DescribeClustersResponse * const q);

    void parseDescribeClustersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeClustersResponse)
    Q_DISABLE_COPY(DescribeClustersResponsePrivate)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
