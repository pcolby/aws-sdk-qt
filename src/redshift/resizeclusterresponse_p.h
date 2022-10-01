// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESIZECLUSTERRESPONSE_P_H
#define QTAWS_RESIZECLUSTERRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class ResizeClusterResponse;

class ResizeClusterResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit ResizeClusterResponsePrivate(ResizeClusterResponse * const q);

    void parseResizeClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResizeClusterResponse)
    Q_DISABLE_COPY(ResizeClusterResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
