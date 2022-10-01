// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FAILOVERGLOBALCLUSTERRESPONSE_P_H
#define QTAWS_FAILOVERGLOBALCLUSTERRESPONSE_P_H

#include "neptuneresponse_p.h"

namespace QtAws {
namespace Neptune {

class FailoverGlobalClusterResponse;

class FailoverGlobalClusterResponsePrivate : public NeptuneResponsePrivate {

public:

    explicit FailoverGlobalClusterResponsePrivate(FailoverGlobalClusterResponse * const q);

    void parseFailoverGlobalClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(FailoverGlobalClusterResponse)
    Q_DISABLE_COPY(FailoverGlobalClusterResponsePrivate)

};

} // namespace Neptune
} // namespace QtAws

#endif
