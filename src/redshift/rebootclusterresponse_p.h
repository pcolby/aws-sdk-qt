// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTCLUSTERRESPONSE_P_H
#define QTAWS_REBOOTCLUSTERRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class RebootClusterResponse;

class RebootClusterResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit RebootClusterResponsePrivate(RebootClusterResponse * const q);

    void parseRebootClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RebootClusterResponse)
    Q_DISABLE_COPY(RebootClusterResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
