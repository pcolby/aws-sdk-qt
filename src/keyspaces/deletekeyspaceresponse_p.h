// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEKEYSPACERESPONSE_P_H
#define QTAWS_DELETEKEYSPACERESPONSE_P_H

#include "keyspacesresponse_p.h"

namespace QtAws {
namespace Keyspaces {

class DeleteKeyspaceResponse;

class DeleteKeyspaceResponsePrivate : public KeyspacesResponsePrivate {

public:

    explicit DeleteKeyspaceResponsePrivate(DeleteKeyspaceResponse * const q);

    void parseDeleteKeyspaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteKeyspaceResponse)
    Q_DISABLE_COPY(DeleteKeyspaceResponsePrivate)

};

} // namespace Keyspaces
} // namespace QtAws

#endif
