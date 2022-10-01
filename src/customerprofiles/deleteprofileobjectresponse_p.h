// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROFILEOBJECTRESPONSE_P_H
#define QTAWS_DELETEPROFILEOBJECTRESPONSE_P_H

#include "customerprofilesresponse_p.h"

namespace QtAws {
namespace CustomerProfiles {

class DeleteProfileObjectResponse;

class DeleteProfileObjectResponsePrivate : public CustomerProfilesResponsePrivate {

public:

    explicit DeleteProfileObjectResponsePrivate(DeleteProfileObjectResponse * const q);

    void parseDeleteProfileObjectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteProfileObjectResponse)
    Q_DISABLE_COPY(DeleteProfileObjectResponsePrivate)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
