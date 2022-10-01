// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERSRESPONSE_P_H
#define QTAWS_DESCRIBECLUSTERSRESPONSE_P_H

#include "daxresponse_p.h"

namespace QtAws {
namespace Dax {

class DescribeClustersResponse;

class DescribeClustersResponsePrivate : public DaxResponsePrivate {

public:

    explicit DescribeClustersResponsePrivate(DescribeClustersResponse * const q);

    void parseDescribeClustersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeClustersResponse)
    Q_DISABLE_COPY(DescribeClustersResponsePrivate)

};

} // namespace Dax
} // namespace QtAws

#endif
