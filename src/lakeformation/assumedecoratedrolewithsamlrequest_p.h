// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSUMEDECORATEDROLEWITHSAMLREQUEST_P_H
#define QTAWS_ASSUMEDECORATEDROLEWITHSAMLREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "assumedecoratedrolewithsamlrequest.h"

namespace QtAws {
namespace LakeFormation {

class AssumeDecoratedRoleWithSAMLRequest;

class AssumeDecoratedRoleWithSAMLRequestPrivate : public LakeFormationRequestPrivate {

public:
    AssumeDecoratedRoleWithSAMLRequestPrivate(const LakeFormationRequest::Action action,
                                   AssumeDecoratedRoleWithSAMLRequest * const q);
    AssumeDecoratedRoleWithSAMLRequestPrivate(const AssumeDecoratedRoleWithSAMLRequestPrivate &other,
                                   AssumeDecoratedRoleWithSAMLRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssumeDecoratedRoleWithSAMLRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
