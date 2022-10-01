// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTUDIORESPONSE_P_H
#define QTAWS_DELETESTUDIORESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class DeleteStudioResponse;

class DeleteStudioResponsePrivate : public NimbleResponsePrivate {

public:

    explicit DeleteStudioResponsePrivate(DeleteStudioResponse * const q);

    void parseDeleteStudioResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteStudioResponse)
    Q_DISABLE_COPY(DeleteStudioResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
