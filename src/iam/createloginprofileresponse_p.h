// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOGINPROFILERESPONSE_P_H
#define QTAWS_CREATELOGINPROFILERESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class CreateLoginProfileResponse;

class CreateLoginProfileResponsePrivate : public IamResponsePrivate {

public:

    explicit CreateLoginProfileResponsePrivate(CreateLoginProfileResponse * const q);

    void parseCreateLoginProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLoginProfileResponse)
    Q_DISABLE_COPY(CreateLoginProfileResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
