// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPACKAGINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETEPACKAGINGCONFIGURATIONRESPONSE_P_H

#include "mediapackagevodresponse_p.h"

namespace QtAws {
namespace MediaPackageVod {

class DeletePackagingConfigurationResponse;

class DeletePackagingConfigurationResponsePrivate : public MediaPackageVodResponsePrivate {

public:

    explicit DeletePackagingConfigurationResponsePrivate(DeletePackagingConfigurationResponse * const q);

    void parseDeletePackagingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePackagingConfigurationResponse)
    Q_DISABLE_COPY(DeletePackagingConfigurationResponsePrivate)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
