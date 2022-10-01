// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETDEFAULTPOLICYVERSIONRESPONSE_P_H
#define QTAWS_SETDEFAULTPOLICYVERSIONRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class SetDefaultPolicyVersionResponse;

class SetDefaultPolicyVersionResponsePrivate : public IamResponsePrivate {

public:

    explicit SetDefaultPolicyVersionResponsePrivate(SetDefaultPolicyVersionResponse * const q);

    void parseSetDefaultPolicyVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetDefaultPolicyVersionResponse)
    Q_DISABLE_COPY(SetDefaultPolicyVersionResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
