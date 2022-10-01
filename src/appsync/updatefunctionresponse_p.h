// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFUNCTIONRESPONSE_P_H
#define QTAWS_UPDATEFUNCTIONRESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class UpdateFunctionResponse;

class UpdateFunctionResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit UpdateFunctionResponsePrivate(UpdateFunctionResponse * const q);

    void parseUpdateFunctionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFunctionResponse)
    Q_DISABLE_COPY(UpdateFunctionResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif
