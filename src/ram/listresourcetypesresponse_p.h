// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCETYPESRESPONSE_P_H
#define QTAWS_LISTRESOURCETYPESRESPONSE_P_H

#include "ramresponse_p.h"

namespace QtAws {
namespace Ram {

class ListResourceTypesResponse;

class ListResourceTypesResponsePrivate : public RamResponsePrivate {

public:

    explicit ListResourceTypesResponsePrivate(ListResourceTypesResponse * const q);

    void parseListResourceTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListResourceTypesResponse)
    Q_DISABLE_COPY(ListResourceTypesResponsePrivate)

};

} // namespace Ram
} // namespace QtAws

#endif
