// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENVIRONMENTRESPONSE_P_H
#define QTAWS_DELETEENVIRONMENTRESPONSE_P_H

#include "cloud9response_p.h"

namespace QtAws {
namespace Cloud9 {

class DeleteEnvironmentResponse;

class DeleteEnvironmentResponsePrivate : public Cloud9ResponsePrivate {

public:

    explicit DeleteEnvironmentResponsePrivate(DeleteEnvironmentResponse * const q);

    void parseDeleteEnvironmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEnvironmentResponse)
    Q_DISABLE_COPY(DeleteEnvironmentResponsePrivate)

};

} // namespace Cloud9
} // namespace QtAws

#endif
