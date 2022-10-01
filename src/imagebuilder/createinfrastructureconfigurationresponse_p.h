// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINFRASTRUCTURECONFIGURATIONRESPONSE_P_H
#define QTAWS_CREATEINFRASTRUCTURECONFIGURATIONRESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class CreateInfrastructureConfigurationResponse;

class CreateInfrastructureConfigurationResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit CreateInfrastructureConfigurationResponsePrivate(CreateInfrastructureConfigurationResponse * const q);

    void parseCreateInfrastructureConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateInfrastructureConfigurationResponse)
    Q_DISABLE_COPY(CreateInfrastructureConfigurationResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
