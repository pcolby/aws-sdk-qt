// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEXTENSIONASSOCIATIONRESPONSE_P_H
#define QTAWS_UPDATEEXTENSIONASSOCIATIONRESPONSE_P_H

#include "appconfigresponse_p.h"

namespace QtAws {
namespace AppConfig {

class UpdateExtensionAssociationResponse;

class UpdateExtensionAssociationResponsePrivate : public AppConfigResponsePrivate {

public:

    explicit UpdateExtensionAssociationResponsePrivate(UpdateExtensionAssociationResponse * const q);

    void parseUpdateExtensionAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateExtensionAssociationResponse)
    Q_DISABLE_COPY(UpdateExtensionAssociationResponsePrivate)

};

} // namespace AppConfig
} // namespace QtAws

#endif
