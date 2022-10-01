// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PAUSECLUSTERRESPONSE_P_H
#define QTAWS_PAUSECLUSTERRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class PauseClusterResponse;

class PauseClusterResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit PauseClusterResponsePrivate(PauseClusterResponse * const q);

    void parsePauseClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PauseClusterResponse)
    Q_DISABLE_COPY(PauseClusterResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
