// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRIGGERRESPONSE_P_H
#define QTAWS_CREATETRIGGERRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class CreateTriggerResponse;

class CreateTriggerResponsePrivate : public GlueResponsePrivate {

public:

    explicit CreateTriggerResponsePrivate(CreateTriggerResponse * const q);

    void parseCreateTriggerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTriggerResponse)
    Q_DISABLE_COPY(CreateTriggerResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
