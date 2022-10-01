// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTUDIOCOMPONENTRESPONSE_P_H
#define QTAWS_DELETESTUDIOCOMPONENTRESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class DeleteStudioComponentResponse;

class DeleteStudioComponentResponsePrivate : public NimbleResponsePrivate {

public:

    explicit DeleteStudioComponentResponsePrivate(DeleteStudioComponentResponse * const q);

    void parseDeleteStudioComponentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteStudioComponentResponse)
    Q_DISABLE_COPY(DeleteStudioComponentResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
