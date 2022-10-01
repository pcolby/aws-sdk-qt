// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPACKAGINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_CREATEPACKAGINGCONFIGURATIONRESPONSE_P_H

#include "mediapackagevodresponse_p.h"

namespace QtAws {
namespace MediaPackageVod {

class CreatePackagingConfigurationResponse;

class CreatePackagingConfigurationResponsePrivate : public MediaPackageVodResponsePrivate {

public:

    explicit CreatePackagingConfigurationResponsePrivate(CreatePackagingConfigurationResponse * const q);

    void parseCreatePackagingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePackagingConfigurationResponse)
    Q_DISABLE_COPY(CreatePackagingConfigurationResponsePrivate)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
