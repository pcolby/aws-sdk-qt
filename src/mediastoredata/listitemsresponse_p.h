// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTITEMSRESPONSE_P_H
#define QTAWS_LISTITEMSRESPONSE_P_H

#include "mediastoredataresponse_p.h"

namespace QtAws {
namespace MediaStoreData {

class ListItemsResponse;

class ListItemsResponsePrivate : public MediaStoreDataResponsePrivate {

public:

    explicit ListItemsResponsePrivate(ListItemsResponse * const q);

    void parseListItemsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListItemsResponse)
    Q_DISABLE_COPY(ListItemsResponsePrivate)

};

} // namespace MediaStoreData
} // namespace QtAws

#endif
