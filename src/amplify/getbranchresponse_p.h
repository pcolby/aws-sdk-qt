// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBRANCHRESPONSE_P_H
#define QTAWS_GETBRANCHRESPONSE_P_H

#include "amplifyresponse_p.h"

namespace QtAws {
namespace Amplify {

class GetBranchResponse;

class GetBranchResponsePrivate : public AmplifyResponsePrivate {

public:

    explicit GetBranchResponsePrivate(GetBranchResponse * const q);

    void parseGetBranchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBranchResponse)
    Q_DISABLE_COPY(GetBranchResponsePrivate)

};

} // namespace Amplify
} // namespace QtAws

#endif
