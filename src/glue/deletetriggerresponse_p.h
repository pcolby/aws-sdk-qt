// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRIGGERRESPONSE_P_H
#define QTAWS_DELETETRIGGERRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class DeleteTriggerResponse;

class DeleteTriggerResponsePrivate : public GlueResponsePrivate {

public:

    explicit DeleteTriggerResponsePrivate(DeleteTriggerResponse * const q);

    void parseDeleteTriggerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTriggerResponse)
    Q_DISABLE_COPY(DeleteTriggerResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
