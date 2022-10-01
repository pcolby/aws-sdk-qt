// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATASOURCERESPONSE_P_H
#define QTAWS_GETDATASOURCERESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class GetDataSourceResponse;

class GetDataSourceResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit GetDataSourceResponsePrivate(GetDataSourceResponse * const q);

    void parseGetDataSourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDataSourceResponse)
    Q_DISABLE_COPY(GetDataSourceResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif
