// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLIENTPROPERTIESRESPONSE_P_H
#define QTAWS_MODIFYCLIENTPROPERTIESRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class ModifyClientPropertiesResponse;

class ModifyClientPropertiesResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit ModifyClientPropertiesResponsePrivate(ModifyClientPropertiesResponse * const q);

    void parseModifyClientPropertiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyClientPropertiesResponse)
    Q_DISABLE_COPY(ModifyClientPropertiesResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
