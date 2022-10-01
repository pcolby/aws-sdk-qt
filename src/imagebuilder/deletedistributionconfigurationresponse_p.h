// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDISTRIBUTIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETEDISTRIBUTIONCONFIGURATIONRESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class DeleteDistributionConfigurationResponse;

class DeleteDistributionConfigurationResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit DeleteDistributionConfigurationResponsePrivate(DeleteDistributionConfigurationResponse * const q);

    void parseDeleteDistributionConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDistributionConfigurationResponse)
    Q_DISABLE_COPY(DeleteDistributionConfigurationResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
