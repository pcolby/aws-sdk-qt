// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXTENSIONASSOCIATIONRESPONSE_P_H
#define QTAWS_GETEXTENSIONASSOCIATIONRESPONSE_P_H

#include "appconfigresponse_p.h"

namespace QtAws {
namespace AppConfig {

class GetExtensionAssociationResponse;

class GetExtensionAssociationResponsePrivate : public AppConfigResponsePrivate {

public:

    explicit GetExtensionAssociationResponsePrivate(GetExtensionAssociationResponse * const q);

    void parseGetExtensionAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetExtensionAssociationResponse)
    Q_DISABLE_COPY(GetExtensionAssociationResponsePrivate)

};

} // namespace AppConfig
} // namespace QtAws

#endif
