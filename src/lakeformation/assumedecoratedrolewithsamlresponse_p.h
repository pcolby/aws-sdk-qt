// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSUMEDECORATEDROLEWITHSAMLRESPONSE_P_H
#define QTAWS_ASSUMEDECORATEDROLEWITHSAMLRESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class AssumeDecoratedRoleWithSAMLResponse;

class AssumeDecoratedRoleWithSAMLResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit AssumeDecoratedRoleWithSAMLResponsePrivate(AssumeDecoratedRoleWithSAMLResponse * const q);

    void parseAssumeDecoratedRoleWithSAMLResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssumeDecoratedRoleWithSAMLResponse)
    Q_DISABLE_COPY(AssumeDecoratedRoleWithSAMLResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
