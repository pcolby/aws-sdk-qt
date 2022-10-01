// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTUDIOMEMBERRESPONSE_P_H
#define QTAWS_DELETESTUDIOMEMBERRESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class DeleteStudioMemberResponse;

class DeleteStudioMemberResponsePrivate : public NimbleResponsePrivate {

public:

    explicit DeleteStudioMemberResponsePrivate(DeleteStudioMemberResponse * const q);

    void parseDeleteStudioMemberResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteStudioMemberResponse)
    Q_DISABLE_COPY(DeleteStudioMemberResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
