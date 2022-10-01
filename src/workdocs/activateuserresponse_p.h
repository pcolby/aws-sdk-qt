// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATEUSERRESPONSE_P_H
#define QTAWS_ACTIVATEUSERRESPONSE_P_H

#include "workdocsresponse_p.h"

namespace QtAws {
namespace WorkDocs {

class ActivateUserResponse;

class ActivateUserResponsePrivate : public WorkDocsResponsePrivate {

public:

    explicit ActivateUserResponsePrivate(ActivateUserResponse * const q);

    void parseActivateUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ActivateUserResponse)
    Q_DISABLE_COPY(ActivateUserResponsePrivate)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
