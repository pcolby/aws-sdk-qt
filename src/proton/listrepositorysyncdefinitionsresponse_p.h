// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPOSITORYSYNCDEFINITIONSRESPONSE_P_H
#define QTAWS_LISTREPOSITORYSYNCDEFINITIONSRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class ListRepositorySyncDefinitionsResponse;

class ListRepositorySyncDefinitionsResponsePrivate : public ProtonResponsePrivate {

public:

    explicit ListRepositorySyncDefinitionsResponsePrivate(ListRepositorySyncDefinitionsResponse * const q);

    void parseListRepositorySyncDefinitionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRepositorySyncDefinitionsResponse)
    Q_DISABLE_COPY(ListRepositorySyncDefinitionsResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
