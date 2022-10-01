// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONFROMENVIRONMENTRESPONSE_P_H
#define QTAWS_DELETEAPPLICATIONFROMENVIRONMENTRESPONSE_P_H

#include "m2response_p.h"

namespace QtAws {
namespace M2 {

class DeleteApplicationFromEnvironmentResponse;

class DeleteApplicationFromEnvironmentResponsePrivate : public M2ResponsePrivate {

public:

    explicit DeleteApplicationFromEnvironmentResponsePrivate(DeleteApplicationFromEnvironmentResponse * const q);

    void parseDeleteApplicationFromEnvironmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteApplicationFromEnvironmentResponse)
    Q_DISABLE_COPY(DeleteApplicationFromEnvironmentResponsePrivate)

};

} // namespace M2
} // namespace QtAws

#endif
