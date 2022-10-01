// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFOLDERMEMBERSHIPRESPONSE_P_H
#define QTAWS_CREATEFOLDERMEMBERSHIPRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class CreateFolderMembershipResponse;

class CreateFolderMembershipResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit CreateFolderMembershipResponsePrivate(CreateFolderMembershipResponse * const q);

    void parseCreateFolderMembershipResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFolderMembershipResponse)
    Q_DISABLE_COPY(CreateFolderMembershipResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
