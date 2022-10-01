// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFARGATEPROFILERESPONSE_P_H
#define QTAWS_CREATEFARGATEPROFILERESPONSE_P_H

#include "eksresponse_p.h"

namespace QtAws {
namespace Eks {

class CreateFargateProfileResponse;

class CreateFargateProfileResponsePrivate : public EksResponsePrivate {

public:

    explicit CreateFargateProfileResponsePrivate(CreateFargateProfileResponse * const q);

    void parseCreateFargateProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFargateProfileResponse)
    Q_DISABLE_COPY(CreateFargateProfileResponsePrivate)

};

} // namespace Eks
} // namespace QtAws

#endif
