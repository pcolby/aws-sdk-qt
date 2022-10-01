// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEACTIVATEUSERRESPONSE_P_H
#define QTAWS_DEACTIVATEUSERRESPONSE_P_H

#include "workdocsresponse_p.h"

namespace QtAws {
namespace WorkDocs {

class DeactivateUserResponse;

class DeactivateUserResponsePrivate : public WorkDocsResponsePrivate {

public:

    explicit DeactivateUserResponsePrivate(DeactivateUserResponse * const q);

    void parseDeactivateUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeactivateUserResponse)
    Q_DISABLE_COPY(DeactivateUserResponsePrivate)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
