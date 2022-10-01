// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISTRIBUTIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETDISTRIBUTIONCONFIGURATIONRESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class GetDistributionConfigurationResponse;

class GetDistributionConfigurationResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit GetDistributionConfigurationResponsePrivate(GetDistributionConfigurationResponse * const q);

    void parseGetDistributionConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDistributionConfigurationResponse)
    Q_DISABLE_COPY(GetDistributionConfigurationResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
