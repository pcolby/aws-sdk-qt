// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEJOBRESPONSE_P_H
#define QTAWS_UPDATEJOBRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class UpdateJobResponse;

class UpdateJobResponsePrivate : public GlueResponsePrivate {

public:

    explicit UpdateJobResponsePrivate(UpdateJobResponse * const q);

    void parseUpdateJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateJobResponse)
    Q_DISABLE_COPY(UpdateJobResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
