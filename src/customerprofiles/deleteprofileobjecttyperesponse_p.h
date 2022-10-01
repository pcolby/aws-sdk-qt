// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROFILEOBJECTTYPERESPONSE_P_H
#define QTAWS_DELETEPROFILEOBJECTTYPERESPONSE_P_H

#include "customerprofilesresponse_p.h"

namespace QtAws {
namespace CustomerProfiles {

class DeleteProfileObjectTypeResponse;

class DeleteProfileObjectTypeResponsePrivate : public CustomerProfilesResponsePrivate {

public:

    explicit DeleteProfileObjectTypeResponsePrivate(DeleteProfileObjectTypeResponse * const q);

    void parseDeleteProfileObjectTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteProfileObjectTypeResponse)
    Q_DISABLE_COPY(DeleteProfileObjectTypeResponsePrivate)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
