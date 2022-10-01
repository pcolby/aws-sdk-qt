// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDISTRIBUTIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATEDISTRIBUTIONCONFIGURATIONRESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class UpdateDistributionConfigurationResponse;

class UpdateDistributionConfigurationResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit UpdateDistributionConfigurationResponsePrivate(UpdateDistributionConfigurationResponse * const q);

    void parseUpdateDistributionConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDistributionConfigurationResponse)
    Q_DISABLE_COPY(UpdateDistributionConfigurationResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
