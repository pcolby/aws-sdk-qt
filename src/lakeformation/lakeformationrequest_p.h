// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LAKEFORMATIONREQUEST_P_H
#define QTAWS_LAKEFORMATIONREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class LakeFormationRequest;

class LakeFormationRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    LakeFormationRequest::Action action; ///< LakeFormation action to be performed.
    QString apiVersion;        ///< LakeFormation API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< LakeFormation request (query string) parameters. @todo?

    LakeFormationRequestPrivate(const LakeFormationRequest::Action action, LakeFormationRequest * const q);
    LakeFormationRequestPrivate(const LakeFormationRequestPrivate &other, LakeFormationRequest * const q);

    static QString toString(const LakeFormationRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(LakeFormationRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
