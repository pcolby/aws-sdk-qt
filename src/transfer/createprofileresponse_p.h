// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROFILERESPONSE_P_H
#define QTAWS_CREATEPROFILERESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class CreateProfileResponse;

class CreateProfileResponsePrivate : public TransferResponsePrivate {

public:

    explicit CreateProfileResponsePrivate(CreateProfileResponse * const q);

    void parseCreateProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateProfileResponse)
    Q_DISABLE_COPY(CreateProfileResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif
