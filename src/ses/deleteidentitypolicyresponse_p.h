// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIDENTITYPOLICYRESPONSE_P_H
#define QTAWS_DELETEIDENTITYPOLICYRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class DeleteIdentityPolicyResponse;

class DeleteIdentityPolicyResponsePrivate : public SesResponsePrivate {

public:

    explicit DeleteIdentityPolicyResponsePrivate(DeleteIdentityPolicyResponse * const q);

    void parseDeleteIdentityPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteIdentityPolicyResponse)
    Q_DISABLE_COPY(DeleteIdentityPolicyResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
