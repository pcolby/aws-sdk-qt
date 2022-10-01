// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLUSTERDBREVISIONRESPONSE_P_H
#define QTAWS_MODIFYCLUSTERDBREVISIONRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class ModifyClusterDbRevisionResponse;

class ModifyClusterDbRevisionResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit ModifyClusterDbRevisionResponsePrivate(ModifyClusterDbRevisionResponse * const q);

    void parseModifyClusterDbRevisionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyClusterDbRevisionResponse)
    Q_DISABLE_COPY(ModifyClusterDbRevisionResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
