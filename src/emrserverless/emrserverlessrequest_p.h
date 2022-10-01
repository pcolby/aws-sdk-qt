// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EMRSERVERLESSREQUEST_P_H
#define QTAWS_EMRSERVERLESSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "emrserverlessrequest.h"

namespace QtAws {
namespace EmrServerless {

class EmrServerlessRequest;

class EmrServerlessRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    EmrServerlessRequest::Action action; ///< EmrServerless action to be performed.
    QString apiVersion;        ///< EmrServerless API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< EmrServerless request (query string) parameters. @todo?

    EmrServerlessRequestPrivate(const EmrServerlessRequest::Action action, EmrServerlessRequest * const q);
    EmrServerlessRequestPrivate(const EmrServerlessRequestPrivate &other, EmrServerlessRequest * const q);

    static QString toString(const EmrServerlessRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(EmrServerlessRequest)

};

} // namespace EmrServerless
} // namespace QtAws

#endif
