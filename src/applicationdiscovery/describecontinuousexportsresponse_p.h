// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTINUOUSEXPORTSRESPONSE_P_H
#define QTAWS_DESCRIBECONTINUOUSEXPORTSRESPONSE_P_H

#include "applicationdiscoveryresponse_p.h"

namespace QtAws {
namespace ApplicationDiscovery {

class DescribeContinuousExportsResponse;

class DescribeContinuousExportsResponsePrivate : public ApplicationDiscoveryResponsePrivate {

public:

    explicit DescribeContinuousExportsResponsePrivate(DescribeContinuousExportsResponse * const q);

    void parseDescribeContinuousExportsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeContinuousExportsResponse)
    Q_DISABLE_COPY(DescribeContinuousExportsResponsePrivate)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
