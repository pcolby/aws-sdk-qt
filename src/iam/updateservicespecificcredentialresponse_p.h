// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICESPECIFICCREDENTIALRESPONSE_P_H
#define QTAWS_UPDATESERVICESPECIFICCREDENTIALRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class UpdateServiceSpecificCredentialResponse;

class UpdateServiceSpecificCredentialResponsePrivate : public IamResponsePrivate {

public:

    explicit UpdateServiceSpecificCredentialResponsePrivate(UpdateServiceSpecificCredentialResponse * const q);

    void parseUpdateServiceSpecificCredentialResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateServiceSpecificCredentialResponse)
    Q_DISABLE_COPY(UpdateServiceSpecificCredentialResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
