// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEKEYSPACERESPONSE_P_H
#define QTAWS_CREATEKEYSPACERESPONSE_P_H

#include "keyspacesresponse_p.h"

namespace QtAws {
namespace Keyspaces {

class CreateKeyspaceResponse;

class CreateKeyspaceResponsePrivate : public KeyspacesResponsePrivate {

public:

    explicit CreateKeyspaceResponsePrivate(CreateKeyspaceResponse * const q);

    void parseCreateKeyspaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateKeyspaceResponse)
    Q_DISABLE_COPY(CreateKeyspaceResponsePrivate)

};

} // namespace Keyspaces
} // namespace QtAws

#endif
