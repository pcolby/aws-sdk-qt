// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDPROFILEKEYRESPONSE_P_H
#define QTAWS_ADDPROFILEKEYRESPONSE_P_H

#include "customerprofilesresponse_p.h"

namespace QtAws {
namespace CustomerProfiles {

class AddProfileKeyResponse;

class AddProfileKeyResponsePrivate : public CustomerProfilesResponsePrivate {

public:

    explicit AddProfileKeyResponsePrivate(AddProfileKeyResponse * const q);

    void parseAddProfileKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddProfileKeyResponse)
    Q_DISABLE_COPY(AddProfileKeyResponsePrivate)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
