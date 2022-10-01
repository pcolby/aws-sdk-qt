// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATASOURCERESPONSE_P_H
#define QTAWS_DELETEDATASOURCERESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DeleteDataSourceResponse;

class DeleteDataSourceResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DeleteDataSourceResponsePrivate(DeleteDataSourceResponse * const q);

    void parseDeleteDataSourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDataSourceResponse)
    Q_DISABLE_COPY(DeleteDataSourceResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
