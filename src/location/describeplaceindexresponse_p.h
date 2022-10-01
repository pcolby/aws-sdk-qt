// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPLACEINDEXRESPONSE_P_H
#define QTAWS_DESCRIBEPLACEINDEXRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class DescribePlaceIndexResponse;

class DescribePlaceIndexResponsePrivate : public LocationResponsePrivate {

public:

    explicit DescribePlaceIndexResponsePrivate(DescribePlaceIndexResponse * const q);

    void parseDescribePlaceIndexResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePlaceIndexResponse)
    Q_DISABLE_COPY(DescribePlaceIndexResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
