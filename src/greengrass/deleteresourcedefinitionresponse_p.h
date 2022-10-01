// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCEDEFINITIONRESPONSE_P_H
#define QTAWS_DELETERESOURCEDEFINITIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class DeleteResourceDefinitionResponse;

class DeleteResourceDefinitionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit DeleteResourceDefinitionResponsePrivate(DeleteResourceDefinitionResponse * const q);

    void parseDeleteResourceDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteResourceDefinitionResponse)
    Q_DISABLE_COPY(DeleteResourceDefinitionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
