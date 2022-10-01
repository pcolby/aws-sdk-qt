// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINSTANCEATTRIBUTERESPONSE_P_H
#define QTAWS_UPDATEINSTANCEATTRIBUTERESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class UpdateInstanceAttributeResponse;

class UpdateInstanceAttributeResponsePrivate : public ConnectResponsePrivate {

public:

    explicit UpdateInstanceAttributeResponsePrivate(UpdateInstanceAttributeResponse * const q);

    void parseUpdateInstanceAttributeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateInstanceAttributeResponse)
    Q_DISABLE_COPY(UpdateInstanceAttributeResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
