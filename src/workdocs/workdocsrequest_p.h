// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WORKDOCSREQUEST_P_H
#define QTAWS_WORKDOCSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "workdocsrequest.h"

namespace QtAws {
namespace WorkDocs {

class WorkDocsRequest;

class WorkDocsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    WorkDocsRequest::Action action; ///< WorkDocs action to be performed.
    QString apiVersion;        ///< WorkDocs API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< WorkDocs request (query string) parameters. @todo?

    WorkDocsRequestPrivate(const WorkDocsRequest::Action action, WorkDocsRequest * const q);
    WorkDocsRequestPrivate(const WorkDocsRequestPrivate &other, WorkDocsRequest * const q);

    static QString toString(const WorkDocsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(WorkDocsRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
