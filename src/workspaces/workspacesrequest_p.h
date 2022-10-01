// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WORKSPACESREQUEST_P_H
#define QTAWS_WORKSPACESREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class WorkSpacesRequest;

class WorkSpacesRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    WorkSpacesRequest::Action action; ///< WorkSpaces action to be performed.
    QString apiVersion;        ///< WorkSpaces API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< WorkSpaces request (query string) parameters. @todo?

    WorkSpacesRequestPrivate(const WorkSpacesRequest::Action action, WorkSpacesRequest * const q);
    WorkSpacesRequestPrivate(const WorkSpacesRequestPrivate &other, WorkSpacesRequest * const q);

    static QString toString(const WorkSpacesRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(WorkSpacesRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
