// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTKEYSPACESRESPONSE_P_H
#define QTAWS_LISTKEYSPACESRESPONSE_P_H

#include "keyspacesresponse_p.h"

namespace QtAws {
namespace Keyspaces {

class ListKeyspacesResponse;

class ListKeyspacesResponsePrivate : public KeyspacesResponsePrivate {

public:

    explicit ListKeyspacesResponsePrivate(ListKeyspacesResponse * const q);

    void parseListKeyspacesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListKeyspacesResponse)
    Q_DISABLE_COPY(ListKeyspacesResponsePrivate)

};

} // namespace Keyspaces
} // namespace QtAws

#endif
