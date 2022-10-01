// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFARGATEPROFILERESPONSE_P_H
#define QTAWS_DELETEFARGATEPROFILERESPONSE_P_H

#include "eksresponse_p.h"

namespace QtAws {
namespace Eks {

class DeleteFargateProfileResponse;

class DeleteFargateProfileResponsePrivate : public EksResponsePrivate {

public:

    explicit DeleteFargateProfileResponsePrivate(DeleteFargateProfileResponse * const q);

    void parseDeleteFargateProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFargateProfileResponse)
    Q_DISABLE_COPY(DeleteFargateProfileResponsePrivate)

};

} // namespace Eks
} // namespace QtAws

#endif
