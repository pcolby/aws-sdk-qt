// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSUMEROLEWITHWEBIDENTITYRESPONSE_P_H
#define QTAWS_ASSUMEROLEWITHWEBIDENTITYRESPONSE_P_H

#include "stsresponse_p.h"

namespace QtAws {
namespace Sts {

class AssumeRoleWithWebIdentityResponse;

class AssumeRoleWithWebIdentityResponsePrivate : public StsResponsePrivate {

public:

    explicit AssumeRoleWithWebIdentityResponsePrivate(AssumeRoleWithWebIdentityResponse * const q);

    void parseAssumeRoleWithWebIdentityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssumeRoleWithWebIdentityResponse)
    Q_DISABLE_COPY(AssumeRoleWithWebIdentityResponsePrivate)

};

} // namespace Sts
} // namespace QtAws

#endif
