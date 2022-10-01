// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FAILOVERDBCLUSTERRESPONSE_P_H
#define QTAWS_FAILOVERDBCLUSTERRESPONSE_P_H

#include "neptuneresponse_p.h"

namespace QtAws {
namespace Neptune {

class FailoverDBClusterResponse;

class FailoverDBClusterResponsePrivate : public NeptuneResponsePrivate {

public:

    explicit FailoverDBClusterResponsePrivate(FailoverDBClusterResponse * const q);

    void parseFailoverDBClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(FailoverDBClusterResponse)
    Q_DISABLE_COPY(FailoverDBClusterResponsePrivate)

};

} // namespace Neptune
} // namespace QtAws

#endif
