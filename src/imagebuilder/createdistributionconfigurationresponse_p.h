// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDISTRIBUTIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_CREATEDISTRIBUTIONCONFIGURATIONRESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class CreateDistributionConfigurationResponse;

class CreateDistributionConfigurationResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit CreateDistributionConfigurationResponsePrivate(CreateDistributionConfigurationResponse * const q);

    void parseCreateDistributionConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDistributionConfigurationResponse)
    Q_DISABLE_COPY(CreateDistributionConfigurationResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
