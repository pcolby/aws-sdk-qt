// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WORKLINKREQUEST_P_H
#define QTAWS_WORKLINKREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "worklinkrequest.h"

namespace QtAws {
namespace WorkLink {

class WorkLinkRequest;

class WorkLinkRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    WorkLinkRequest::Action action; ///< WorkLink action to be performed.
    QString apiVersion;        ///< WorkLink API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< WorkLink request (query string) parameters. @todo?

    WorkLinkRequestPrivate(const WorkLinkRequest::Action action, WorkLinkRequest * const q);
    WorkLinkRequestPrivate(const WorkLinkRequestPrivate &other, WorkLinkRequest * const q);

    static QString toString(const WorkLinkRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(WorkLinkRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
