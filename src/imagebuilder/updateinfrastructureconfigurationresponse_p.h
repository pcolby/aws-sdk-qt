// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINFRASTRUCTURECONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATEINFRASTRUCTURECONFIGURATIONRESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class UpdateInfrastructureConfigurationResponse;

class UpdateInfrastructureConfigurationResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit UpdateInfrastructureConfigurationResponsePrivate(UpdateInfrastructureConfigurationResponse * const q);

    void parseUpdateInfrastructureConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateInfrastructureConfigurationResponse)
    Q_DISABLE_COPY(UpdateInfrastructureConfigurationResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
