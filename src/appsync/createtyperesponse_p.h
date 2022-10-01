// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETYPERESPONSE_P_H
#define QTAWS_CREATETYPERESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class CreateTypeResponse;

class CreateTypeResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit CreateTypeResponsePrivate(CreateTypeResponse * const q);

    void parseCreateTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTypeResponse)
    Q_DISABLE_COPY(CreateTypeResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif
