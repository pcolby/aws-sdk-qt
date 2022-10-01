// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINDICESRESPONSE_P_H
#define QTAWS_LISTINDICESRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class ListIndicesResponse;

class ListIndicesResponsePrivate : public KendraResponsePrivate {

public:

    explicit ListIndicesResponsePrivate(ListIndicesResponse * const q);

    void parseListIndicesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListIndicesResponse)
    Q_DISABLE_COPY(ListIndicesResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
