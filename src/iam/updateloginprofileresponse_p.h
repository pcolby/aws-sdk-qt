// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOGINPROFILERESPONSE_P_H
#define QTAWS_UPDATELOGINPROFILERESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class UpdateLoginProfileResponse;

class UpdateLoginProfileResponsePrivate : public IamResponsePrivate {

public:

    explicit UpdateLoginProfileResponsePrivate(UpdateLoginProfileResponse * const q);

    void parseUpdateLoginProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateLoginProfileResponse)
    Q_DISABLE_COPY(UpdateLoginProfileResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
