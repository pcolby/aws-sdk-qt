// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPREHENDMEDICALREQUEST_P_H
#define QTAWS_COMPREHENDMEDICALREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "comprehendmedicalrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class ComprehendMedicalRequest;

class ComprehendMedicalRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ComprehendMedicalRequest::Action action; ///< ComprehendMedical action to be performed.
    QString apiVersion;        ///< ComprehendMedical API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ComprehendMedical request (query string) parameters. @todo?

    ComprehendMedicalRequestPrivate(const ComprehendMedicalRequest::Action action, ComprehendMedicalRequest * const q);
    ComprehendMedicalRequestPrivate(const ComprehendMedicalRequestPrivate &other, ComprehendMedicalRequest * const q);

    static QString toString(const ComprehendMedicalRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ComprehendMedicalRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
