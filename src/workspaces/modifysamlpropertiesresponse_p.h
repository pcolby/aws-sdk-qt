// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYSAMLPROPERTIESRESPONSE_P_H
#define QTAWS_MODIFYSAMLPROPERTIESRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class ModifySamlPropertiesResponse;

class ModifySamlPropertiesResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit ModifySamlPropertiesResponsePrivate(ModifySamlPropertiesResponse * const q);

    void parseModifySamlPropertiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifySamlPropertiesResponse)
    Q_DISABLE_COPY(ModifySamlPropertiesResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
