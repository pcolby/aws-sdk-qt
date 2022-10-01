// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLUSTERRESPONSE_P_H
#define QTAWS_MODIFYCLUSTERRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class ModifyClusterResponse;

class ModifyClusterResponsePrivate : public EmrResponsePrivate {

public:

    explicit ModifyClusterResponsePrivate(ModifyClusterResponse * const q);

    void parseModifyClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyClusterResponse)
    Q_DISABLE_COPY(ModifyClusterResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif
