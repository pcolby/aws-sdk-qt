// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFUNCTIONRESPONSE_P_H
#define QTAWS_CREATEFUNCTIONRESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class CreateFunctionResponse;

class CreateFunctionResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit CreateFunctionResponsePrivate(CreateFunctionResponse * const q);

    void parseCreateFunctionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFunctionResponse)
    Q_DISABLE_COPY(CreateFunctionResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif
