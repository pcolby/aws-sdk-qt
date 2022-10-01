// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUPDATESRESPONSE_P_H
#define QTAWS_LISTUPDATESRESPONSE_P_H

#include "eksresponse_p.h"

namespace QtAws {
namespace Eks {

class ListUpdatesResponse;

class ListUpdatesResponsePrivate : public EksResponsePrivate {

public:

    explicit ListUpdatesResponsePrivate(ListUpdatesResponse * const q);

    void parseListUpdatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListUpdatesResponse)
    Q_DISABLE_COPY(ListUpdatesResponsePrivate)

};

} // namespace Eks
} // namespace QtAws

#endif
