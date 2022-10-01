// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPIKEYSRESPONSE_P_H
#define QTAWS_LISTAPIKEYSRESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class ListApiKeysResponse;

class ListApiKeysResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit ListApiKeysResponsePrivate(ListApiKeysResponse * const q);

    void parseListApiKeysResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListApiKeysResponse)
    Q_DISABLE_COPY(ListApiKeysResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif
