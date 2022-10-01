// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WORKSPACESWEBREQUEST_P_H
#define QTAWS_WORKSPACESWEBREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "workspaceswebrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class WorkSpacesWebRequest;

class WorkSpacesWebRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    WorkSpacesWebRequest::Action action; ///< WorkSpacesWeb action to be performed.
    QString apiVersion;        ///< WorkSpacesWeb API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< WorkSpacesWeb request (query string) parameters. @todo?

    WorkSpacesWebRequestPrivate(const WorkSpacesWebRequest::Action action, WorkSpacesWebRequest * const q);
    WorkSpacesWebRequestPrivate(const WorkSpacesWebRequestPrivate &other, WorkSpacesWebRequest * const q);

    static QString toString(const WorkSpacesWebRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(WorkSpacesWebRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
