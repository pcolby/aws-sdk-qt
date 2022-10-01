// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUNCTIONRESPONSE_P_H
#define QTAWS_GETFUNCTIONRESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class GetFunctionResponse;

class GetFunctionResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit GetFunctionResponsePrivate(GetFunctionResponse * const q);

    void parseGetFunctionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFunctionResponse)
    Q_DISABLE_COPY(GetFunctionResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif
