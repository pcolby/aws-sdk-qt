// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXTENSIONASSOCIATIONRESPONSE_P_H
#define QTAWS_CREATEEXTENSIONASSOCIATIONRESPONSE_P_H

#include "appconfigresponse_p.h"

namespace QtAws {
namespace AppConfig {

class CreateExtensionAssociationResponse;

class CreateExtensionAssociationResponsePrivate : public AppConfigResponsePrivate {

public:

    explicit CreateExtensionAssociationResponsePrivate(CreateExtensionAssociationResponse * const q);

    void parseCreateExtensionAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateExtensionAssociationResponse)
    Q_DISABLE_COPY(CreateExtensionAssociationResponsePrivate)

};

} // namespace AppConfig
} // namespace QtAws

#endif
