// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCURRENTUSERRESPONSE_P_H
#define QTAWS_GETCURRENTUSERRESPONSE_P_H

#include "workdocsresponse_p.h"

namespace QtAws {
namespace WorkDocs {

class GetCurrentUserResponse;

class GetCurrentUserResponsePrivate : public WorkDocsResponsePrivate {

public:

    explicit GetCurrentUserResponsePrivate(GetCurrentUserResponse * const q);

    void parseGetCurrentUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCurrentUserResponse)
    Q_DISABLE_COPY(GetCurrentUserResponsePrivate)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
