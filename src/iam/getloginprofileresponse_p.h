// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOGINPROFILERESPONSE_P_H
#define QTAWS_GETLOGINPROFILERESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class GetLoginProfileResponse;

class GetLoginProfileResponsePrivate : public IamResponsePrivate {

public:

    explicit GetLoginProfileResponsePrivate(GetLoginProfileResponse * const q);

    void parseGetLoginProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLoginProfileResponse)
    Q_DISABLE_COPY(GetLoginProfileResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
