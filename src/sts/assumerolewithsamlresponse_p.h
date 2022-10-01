// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSUMEROLEWITHSAMLRESPONSE_P_H
#define QTAWS_ASSUMEROLEWITHSAMLRESPONSE_P_H

#include "stsresponse_p.h"

namespace QtAws {
namespace Sts {

class AssumeRoleWithSAMLResponse;

class AssumeRoleWithSAMLResponsePrivate : public StsResponsePrivate {

public:

    explicit AssumeRoleWithSAMLResponsePrivate(AssumeRoleWithSAMLResponse * const q);

    void parseAssumeRoleWithSAMLResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssumeRoleWithSAMLResponse)
    Q_DISABLE_COPY(AssumeRoleWithSAMLResponsePrivate)

};

} // namespace Sts
} // namespace QtAws

#endif
