// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASOURCERESPONSE_P_H
#define QTAWS_UPDATEDATASOURCERESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class UpdateDataSourceResponse;

class UpdateDataSourceResponsePrivate : public KendraResponsePrivate {

public:

    explicit UpdateDataSourceResponsePrivate(UpdateDataSourceResponse * const q);

    void parseUpdateDataSourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDataSourceResponse)
    Q_DISABLE_COPY(UpdateDataSourceResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
