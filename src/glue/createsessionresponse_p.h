// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESESSIONRESPONSE_P_H
#define QTAWS_CREATESESSIONRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class CreateSessionResponse;

class CreateSessionResponsePrivate : public GlueResponsePrivate {

public:

    explicit CreateSessionResponsePrivate(CreateSessionResponse * const q);

    void parseCreateSessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSessionResponse)
    Q_DISABLE_COPY(CreateSessionResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
