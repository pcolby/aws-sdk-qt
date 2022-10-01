// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBRANCHRESPONSE_P_H
#define QTAWS_UPDATEBRANCHRESPONSE_P_H

#include "amplifyresponse_p.h"

namespace QtAws {
namespace Amplify {

class UpdateBranchResponse;

class UpdateBranchResponsePrivate : public AmplifyResponsePrivate {

public:

    explicit UpdateBranchResponsePrivate(UpdateBranchResponse * const q);

    void parseUpdateBranchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateBranchResponse)
    Q_DISABLE_COPY(UpdateBranchResponsePrivate)

};

} // namespace Amplify
} // namespace QtAws

#endif
