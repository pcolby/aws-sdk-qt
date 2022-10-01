// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINFRASTRUCTURECONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETEINFRASTRUCTURECONFIGURATIONRESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class DeleteInfrastructureConfigurationResponse;

class DeleteInfrastructureConfigurationResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit DeleteInfrastructureConfigurationResponsePrivate(DeleteInfrastructureConfigurationResponse * const q);

    void parseDeleteInfrastructureConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteInfrastructureConfigurationResponse)
    Q_DISABLE_COPY(DeleteInfrastructureConfigurationResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
