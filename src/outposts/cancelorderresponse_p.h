// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELORDERRESPONSE_P_H
#define QTAWS_CANCELORDERRESPONSE_P_H

#include "outpostsresponse_p.h"

namespace QtAws {
namespace Outposts {

class CancelOrderResponse;

class CancelOrderResponsePrivate : public OutpostsResponsePrivate {

public:

    explicit CancelOrderResponsePrivate(CancelOrderResponse * const q);

    void parseCancelOrderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelOrderResponse)
    Q_DISABLE_COPY(CancelOrderResponsePrivate)

};

} // namespace Outposts
} // namespace QtAws

#endif
