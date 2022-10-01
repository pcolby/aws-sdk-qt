// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPOLICYVERSIONRESPONSE_P_H
#define QTAWS_CREATEPOLICYVERSIONRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class CreatePolicyVersionResponse;

class CreatePolicyVersionResponsePrivate : public IamResponsePrivate {

public:

    explicit CreatePolicyVersionResponsePrivate(CreatePolicyVersionResponse * const q);

    void parseCreatePolicyVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePolicyVersionResponse)
    Q_DISABLE_COPY(CreatePolicyVersionResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
