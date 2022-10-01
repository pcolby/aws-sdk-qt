// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICEPRIMARYTASKSETRESPONSE_P_H
#define QTAWS_UPDATESERVICEPRIMARYTASKSETRESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class UpdateServicePrimaryTaskSetResponse;

class UpdateServicePrimaryTaskSetResponsePrivate : public EcsResponsePrivate {

public:

    explicit UpdateServicePrimaryTaskSetResponsePrivate(UpdateServicePrimaryTaskSetResponse * const q);

    void parseUpdateServicePrimaryTaskSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateServicePrimaryTaskSetResponse)
    Q_DISABLE_COPY(UpdateServicePrimaryTaskSetResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
