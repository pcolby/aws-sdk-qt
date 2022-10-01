// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MGNREQUEST_P_H
#define QTAWS_MGNREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "mgnrequest.h"

namespace QtAws {
namespace Mgn {

class MgnRequest;

class MgnRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    MgnRequest::Action action; ///< Mgn action to be performed.
    QString apiVersion;        ///< Mgn API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Mgn request (query string) parameters. @todo?

    MgnRequestPrivate(const MgnRequest::Action action, MgnRequest * const q);
    MgnRequestPrivate(const MgnRequestPrivate &other, MgnRequest * const q);

    static QString toString(const MgnRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(MgnRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
