// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTATTRIBUTESRESPONSE_P_H
#define QTAWS_PUTATTRIBUTESRESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class PutAttributesResponse;

class PutAttributesResponsePrivate : public EcsResponsePrivate {

public:

    explicit PutAttributesResponsePrivate(PutAttributesResponse * const q);

    void parsePutAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutAttributesResponse)
    Q_DISABLE_COPY(PutAttributesResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
