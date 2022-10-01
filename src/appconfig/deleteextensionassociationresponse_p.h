// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXTENSIONASSOCIATIONRESPONSE_P_H
#define QTAWS_DELETEEXTENSIONASSOCIATIONRESPONSE_P_H

#include "appconfigresponse_p.h"

namespace QtAws {
namespace AppConfig {

class DeleteExtensionAssociationResponse;

class DeleteExtensionAssociationResponsePrivate : public AppConfigResponsePrivate {

public:

    explicit DeleteExtensionAssociationResponsePrivate(DeleteExtensionAssociationResponse * const q);

    void parseDeleteExtensionAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteExtensionAssociationResponse)
    Q_DISABLE_COPY(DeleteExtensionAssociationResponsePrivate)

};

} // namespace AppConfig
} // namespace QtAws

#endif
