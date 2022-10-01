// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETABLERESPONSE_P_H
#define QTAWS_CREATETABLERESPONSE_P_H

#include "keyspacesresponse_p.h"

namespace QtAws {
namespace Keyspaces {

class CreateTableResponse;

class CreateTableResponsePrivate : public KeyspacesResponsePrivate {

public:

    explicit CreateTableResponsePrivate(CreateTableResponse * const q);

    void parseCreateTableResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTableResponse)
    Q_DISABLE_COPY(CreateTableResponsePrivate)

};

} // namespace Keyspaces
} // namespace QtAws

#endif
