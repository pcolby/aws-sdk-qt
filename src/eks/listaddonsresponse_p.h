// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTADDONSRESPONSE_P_H
#define QTAWS_LISTADDONSRESPONSE_P_H

#include "eksresponse_p.h"

namespace QtAws {
namespace Eks {

class ListAddonsResponse;

class ListAddonsResponsePrivate : public EksResponsePrivate {

public:

    explicit ListAddonsResponsePrivate(ListAddonsResponse * const q);

    void parseListAddonsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAddonsResponse)
    Q_DISABLE_COPY(ListAddonsResponsePrivate)

};

} // namespace Eks
} // namespace QtAws

#endif
