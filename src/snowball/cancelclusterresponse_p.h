// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELCLUSTERRESPONSE_P_H
#define QTAWS_CANCELCLUSTERRESPONSE_P_H

#include "snowballresponse_p.h"

namespace QtAws {
namespace Snowball {

class CancelClusterResponse;

class CancelClusterResponsePrivate : public SnowballResponsePrivate {

public:

    explicit CancelClusterResponsePrivate(CancelClusterResponse * const q);

    void parseCancelClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelClusterResponse)
    Q_DISABLE_COPY(CancelClusterResponsePrivate)

};

} // namespace Snowball
} // namespace QtAws

#endif
