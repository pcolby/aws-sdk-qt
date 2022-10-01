// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFUNCTIONDEFINITIONSRESPONSE_P_H
#define QTAWS_LISTFUNCTIONDEFINITIONSRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class ListFunctionDefinitionsResponse;

class ListFunctionDefinitionsResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit ListFunctionDefinitionsResponsePrivate(ListFunctionDefinitionsResponse * const q);

    void parseListFunctionDefinitionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFunctionDefinitionsResponse)
    Q_DISABLE_COPY(ListFunctionDefinitionsResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
