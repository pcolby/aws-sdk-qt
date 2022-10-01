// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVICESPECIFICCREDENTIALRESPONSE_P_H
#define QTAWS_DELETESERVICESPECIFICCREDENTIALRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class DeleteServiceSpecificCredentialResponse;

class DeleteServiceSpecificCredentialResponsePrivate : public IamResponsePrivate {

public:

    explicit DeleteServiceSpecificCredentialResponsePrivate(DeleteServiceSpecificCredentialResponse * const q);

    void parseDeleteServiceSpecificCredentialResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteServiceSpecificCredentialResponse)
    Q_DISABLE_COPY(DeleteServiceSpecificCredentialResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
