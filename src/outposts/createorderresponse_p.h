// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEORDERRESPONSE_P_H
#define QTAWS_CREATEORDERRESPONSE_P_H

#include "outpostsresponse_p.h"

namespace QtAws {
namespace Outposts {

class CreateOrderResponse;

class CreateOrderResponsePrivate : public OutpostsResponsePrivate {

public:

    explicit CreateOrderResponsePrivate(CreateOrderResponse * const q);

    void parseCreateOrderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateOrderResponse)
    Q_DISABLE_COPY(CreateOrderResponsePrivate)

};

} // namespace Outposts
} // namespace QtAws

#endif
