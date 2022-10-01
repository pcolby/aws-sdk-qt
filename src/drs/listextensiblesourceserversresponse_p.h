// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXTENSIBLESOURCESERVERSRESPONSE_P_H
#define QTAWS_LISTEXTENSIBLESOURCESERVERSRESPONSE_P_H

#include "drsresponse_p.h"

namespace QtAws {
namespace Drs {

class ListExtensibleSourceServersResponse;

class ListExtensibleSourceServersResponsePrivate : public DrsResponsePrivate {

public:

    explicit ListExtensibleSourceServersResponsePrivate(ListExtensibleSourceServersResponse * const q);

    void parseListExtensibleSourceServersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListExtensibleSourceServersResponse)
    Q_DISABLE_COPY(ListExtensibleSourceServersResponsePrivate)

};

} // namespace Drs
} // namespace QtAws

#endif
