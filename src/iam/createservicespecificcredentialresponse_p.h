// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESERVICESPECIFICCREDENTIALRESPONSE_P_H
#define QTAWS_CREATESERVICESPECIFICCREDENTIALRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class CreateServiceSpecificCredentialResponse;

class CreateServiceSpecificCredentialResponsePrivate : public IamResponsePrivate {

public:

    explicit CreateServiceSpecificCredentialResponsePrivate(CreateServiceSpecificCredentialResponse * const q);

    void parseCreateServiceSpecificCredentialResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateServiceSpecificCredentialResponse)
    Q_DISABLE_COPY(CreateServiceSpecificCredentialResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
