// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEJOBRESPONSE_P_H
#define QTAWS_DELETEJOBRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class DeleteJobResponse;

class DeleteJobResponsePrivate : public GlueResponsePrivate {

public:

    explicit DeleteJobResponsePrivate(DeleteJobResponse * const q);

    void parseDeleteJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteJobResponse)
    Q_DISABLE_COPY(DeleteJobResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
