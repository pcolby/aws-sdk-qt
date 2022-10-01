// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASOURCERESPONSE_P_H
#define QTAWS_UPDATEDATASOURCERESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class UpdateDataSourceResponse;

class UpdateDataSourceResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit UpdateDataSourceResponsePrivate(UpdateDataSourceResponse * const q);

    void parseUpdateDataSourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDataSourceResponse)
    Q_DISABLE_COPY(UpdateDataSourceResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif
