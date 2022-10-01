// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FAILOVERDBCLUSTERRESPONSE_P_H
#define QTAWS_FAILOVERDBCLUSTERRESPONSE_P_H

#include "docdbresponse_p.h"

namespace QtAws {
namespace DocDb {

class FailoverDBClusterResponse;

class FailoverDBClusterResponsePrivate : public DocDbResponsePrivate {

public:

    explicit FailoverDBClusterResponsePrivate(FailoverDBClusterResponse * const q);

    void parseFailoverDBClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(FailoverDBClusterResponse)
    Q_DISABLE_COPY(FailoverDBClusterResponsePrivate)

};

} // namespace DocDb
} // namespace QtAws

#endif
