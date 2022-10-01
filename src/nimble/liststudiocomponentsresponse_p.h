// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTUDIOCOMPONENTSRESPONSE_P_H
#define QTAWS_LISTSTUDIOCOMPONENTSRESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class ListStudioComponentsResponse;

class ListStudioComponentsResponsePrivate : public NimbleResponsePrivate {

public:

    explicit ListStudioComponentsResponsePrivate(ListStudioComponentsResponse * const q);

    void parseListStudioComponentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListStudioComponentsResponse)
    Q_DISABLE_COPY(ListStudioComponentsResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
