// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MWAAREQUEST_P_H
#define QTAWS_MWAAREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "mwaarequest.h"

namespace QtAws {
namespace Mwaa {

class MwaaRequest;

class MwaaRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    MwaaRequest::Action action; ///< Mwaa action to be performed.
    QString apiVersion;        ///< Mwaa API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Mwaa request (query string) parameters. @todo?

    MwaaRequestPrivate(const MwaaRequest::Action action, MwaaRequest * const q);
    MwaaRequestPrivate(const MwaaRequestPrivate &other, MwaaRequest * const q);

    static QString toString(const MwaaRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(MwaaRequest)

};

} // namespace Mwaa
} // namespace QtAws

#endif
