// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORETABLERESPONSE_P_H
#define QTAWS_RESTORETABLERESPONSE_P_H

#include "keyspacesresponse_p.h"

namespace QtAws {
namespace Keyspaces {

class RestoreTableResponse;

class RestoreTableResponsePrivate : public KeyspacesResponsePrivate {

public:

    explicit RestoreTableResponsePrivate(RestoreTableResponse * const q);

    void parseRestoreTableResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RestoreTableResponse)
    Q_DISABLE_COPY(RestoreTableResponsePrivate)

};

} // namespace Keyspaces
} // namespace QtAws

#endif
