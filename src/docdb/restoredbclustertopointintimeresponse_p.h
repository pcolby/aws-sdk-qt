// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREDBCLUSTERTOPOINTINTIMERESPONSE_P_H
#define QTAWS_RESTOREDBCLUSTERTOPOINTINTIMERESPONSE_P_H

#include "docdbresponse_p.h"

namespace QtAws {
namespace DocDb {

class RestoreDBClusterToPointInTimeResponse;

class RestoreDBClusterToPointInTimeResponsePrivate : public DocDbResponsePrivate {

public:

    explicit RestoreDBClusterToPointInTimeResponsePrivate(RestoreDBClusterToPointInTimeResponse * const q);

    void parseRestoreDBClusterToPointInTimeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RestoreDBClusterToPointInTimeResponse)
    Q_DISABLE_COPY(RestoreDBClusterToPointInTimeResponsePrivate)

};

} // namespace DocDb
} // namespace QtAws

#endif
