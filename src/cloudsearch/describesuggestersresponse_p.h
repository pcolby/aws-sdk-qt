// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESUGGESTERSRESPONSE_P_H
#define QTAWS_DESCRIBESUGGESTERSRESPONSE_P_H

#include "cloudsearchresponse_p.h"

namespace QtAws {
namespace CloudSearch {

class DescribeSuggestersResponse;

class DescribeSuggestersResponsePrivate : public CloudSearchResponsePrivate {

public:

    explicit DescribeSuggestersResponsePrivate(DescribeSuggestersResponse * const q);

    void parseDescribeSuggestersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSuggestersResponse)
    Q_DISABLE_COPY(DescribeSuggestersResponsePrivate)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
