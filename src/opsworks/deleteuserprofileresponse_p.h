// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERPROFILERESPONSE_P_H
#define QTAWS_DELETEUSERPROFILERESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class DeleteUserProfileResponse;

class DeleteUserProfileResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit DeleteUserProfileResponsePrivate(DeleteUserProfileResponse * const q);

    void parseDeleteUserProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteUserProfileResponse)
    Q_DISABLE_COPY(DeleteUserProfileResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
