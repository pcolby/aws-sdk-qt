// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATAVIEWSRESPONSE_P_H
#define QTAWS_LISTDATAVIEWSRESPONSE_P_H

#include "finspacedataresponse_p.h"

namespace QtAws {
namespace FinspaceData {

class ListDataViewsResponse;

class ListDataViewsResponsePrivate : public FinspaceDataResponsePrivate {

public:

    explicit ListDataViewsResponsePrivate(ListDataViewsResponse * const q);

    void parseListDataViewsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDataViewsResponse)
    Q_DISABLE_COPY(ListDataViewsResponsePrivate)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
