// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETKEYSPACERESPONSE_P_H
#define QTAWS_GETKEYSPACERESPONSE_P_H

#include "keyspacesresponse_p.h"

namespace QtAws {
namespace Keyspaces {

class GetKeyspaceResponse;

class GetKeyspaceResponsePrivate : public KeyspacesResponsePrivate {

public:

    explicit GetKeyspaceResponsePrivate(GetKeyspaceResponse * const q);

    void parseGetKeyspaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetKeyspaceResponse)
    Q_DISABLE_COPY(GetKeyspaceResponsePrivate)

};

} // namespace Keyspaces
} // namespace QtAws

#endif
