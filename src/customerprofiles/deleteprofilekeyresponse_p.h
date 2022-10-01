// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROFILEKEYRESPONSE_P_H
#define QTAWS_DELETEPROFILEKEYRESPONSE_P_H

#include "customerprofilesresponse_p.h"

namespace QtAws {
namespace CustomerProfiles {

class DeleteProfileKeyResponse;

class DeleteProfileKeyResponsePrivate : public CustomerProfilesResponsePrivate {

public:

    explicit DeleteProfileKeyResponsePrivate(DeleteProfileKeyResponse * const q);

    void parseDeleteProfileKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteProfileKeyResponse)
    Q_DISABLE_COPY(DeleteProfileKeyResponsePrivate)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
