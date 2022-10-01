// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_OPSWORKSREQUEST_P_H
#define QTAWS_OPSWORKSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class OpsWorksRequest;

class OpsWorksRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    OpsWorksRequest::Action action; ///< OpsWorks action to be performed.
    QString apiVersion;        ///< OpsWorks API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< OpsWorks request (query string) parameters. @todo?

    OpsWorksRequestPrivate(const OpsWorksRequest::Action action, OpsWorksRequest * const q);
    OpsWorksRequestPrivate(const OpsWorksRequestPrivate &other, OpsWorksRequest * const q);

    static QString toString(const OpsWorksRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(OpsWorksRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
