// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOOKOUTVISIONREQUEST_P_H
#define QTAWS_LOOKOUTVISIONREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "lookoutvisionrequest.h"

namespace QtAws {
namespace LookoutVision {

class LookoutVisionRequest;

class LookoutVisionRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    LookoutVisionRequest::Action action; ///< LookoutVision action to be performed.
    QString apiVersion;        ///< LookoutVision API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< LookoutVision request (query string) parameters. @todo?

    LookoutVisionRequestPrivate(const LookoutVisionRequest::Action action, LookoutVisionRequest * const q);
    LookoutVisionRequestPrivate(const LookoutVisionRequestPrivate &other, LookoutVisionRequest * const q);

    static QString toString(const LookoutVisionRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(LookoutVisionRequest)

};

} // namespace LookoutVision
} // namespace QtAws

#endif
