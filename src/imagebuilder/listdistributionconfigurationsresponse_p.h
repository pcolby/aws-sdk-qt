// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISTRIBUTIONCONFIGURATIONSRESPONSE_P_H
#define QTAWS_LISTDISTRIBUTIONCONFIGURATIONSRESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class ListDistributionConfigurationsResponse;

class ListDistributionConfigurationsResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit ListDistributionConfigurationsResponsePrivate(ListDistributionConfigurationsResponse * const q);

    void parseListDistributionConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDistributionConfigurationsResponse)
    Q_DISABLE_COPY(ListDistributionConfigurationsResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
