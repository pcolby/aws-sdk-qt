// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOREDEFINITIONRESPONSE_P_H
#define QTAWS_DELETECOREDEFINITIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class DeleteCoreDefinitionResponse;

class DeleteCoreDefinitionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit DeleteCoreDefinitionResponsePrivate(DeleteCoreDefinitionResponse * const q);

    void parseDeleteCoreDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCoreDefinitionResponse)
    Q_DISABLE_COPY(DeleteCoreDefinitionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
