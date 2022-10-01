// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINFRASTRUCTURECONFIGURATIONRESPONSE_P_H
#define QTAWS_GETINFRASTRUCTURECONFIGURATIONRESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class GetInfrastructureConfigurationResponse;

class GetInfrastructureConfigurationResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit GetInfrastructureConfigurationResponsePrivate(GetInfrastructureConfigurationResponse * const q);

    void parseGetInfrastructureConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetInfrastructureConfigurationResponse)
    Q_DISABLE_COPY(GetInfrastructureConfigurationResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
