// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETYPERESPONSE_P_H
#define QTAWS_DELETETYPERESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class DeleteTypeResponse;

class DeleteTypeResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit DeleteTypeResponsePrivate(DeleteTypeResponse * const q);

    void parseDeleteTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTypeResponse)
    Q_DISABLE_COPY(DeleteTypeResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif
