// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATASOURCERESPONSE_P_H
#define QTAWS_DELETEDATASOURCERESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class DeleteDataSourceResponse;

class DeleteDataSourceResponsePrivate : public KendraResponsePrivate {

public:

    explicit DeleteDataSourceResponsePrivate(DeleteDataSourceResponse * const q);

    void parseDeleteDataSourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDataSourceResponse)
    Q_DISABLE_COPY(DeleteDataSourceResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
