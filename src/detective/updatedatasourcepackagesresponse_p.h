// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASOURCEPACKAGESRESPONSE_P_H
#define QTAWS_UPDATEDATASOURCEPACKAGESRESPONSE_P_H

#include "detectiveresponse_p.h"

namespace QtAws {
namespace Detective {

class UpdateDatasourcePackagesResponse;

class UpdateDatasourcePackagesResponsePrivate : public DetectiveResponsePrivate {

public:

    explicit UpdateDatasourcePackagesResponsePrivate(UpdateDatasourcePackagesResponse * const q);

    void parseUpdateDatasourcePackagesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDatasourcePackagesResponse)
    Q_DISABLE_COPY(UpdateDatasourcePackagesResponsePrivate)

};

} // namespace Detective
} // namespace QtAws

#endif
