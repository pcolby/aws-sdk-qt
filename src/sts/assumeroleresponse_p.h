// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSUMEROLERESPONSE_P_H
#define QTAWS_ASSUMEROLERESPONSE_P_H

#include "stsresponse_p.h"

namespace QtAws {
namespace Sts {

class AssumeRoleResponse;

class AssumeRoleResponsePrivate : public StsResponsePrivate {

public:

    explicit AssumeRoleResponsePrivate(AssumeRoleResponse * const q);

    void parseAssumeRoleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssumeRoleResponse)
    Q_DISABLE_COPY(AssumeRoleResponsePrivate)

};

} // namespace Sts
} // namespace QtAws

#endif
