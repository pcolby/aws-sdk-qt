// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETSRESPONSE_P_H
#define QTAWS_LISTDATASETSRESPONSE_P_H

#include "cognitosyncresponse_p.h"

namespace QtAws {
namespace CognitoSync {

class ListDatasetsResponse;

class ListDatasetsResponsePrivate : public CognitoSyncResponsePrivate {

public:

    explicit ListDatasetsResponsePrivate(ListDatasetsResponse * const q);

    void parseListDatasetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDatasetsResponse)
    Q_DISABLE_COPY(ListDatasetsResponsePrivate)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
