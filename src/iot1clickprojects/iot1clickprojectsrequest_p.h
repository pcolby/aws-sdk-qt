// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOT1CLICKPROJECTSREQUEST_P_H
#define QTAWS_IOT1CLICKPROJECTSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "iot1clickprojectsrequest.h"

namespace QtAws {
namespace IoT1ClickProjects {

class IoT1ClickProjectsRequest;

class IoT1ClickProjectsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    IoT1ClickProjectsRequest::Action action; ///< IoT1ClickProjects action to be performed.
    QString apiVersion;        ///< IoT1ClickProjects API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< IoT1ClickProjects request (query string) parameters. @todo?

    IoT1ClickProjectsRequestPrivate(const IoT1ClickProjectsRequest::Action action, IoT1ClickProjectsRequest * const q);
    IoT1ClickProjectsRequestPrivate(const IoT1ClickProjectsRequestPrivate &other, IoT1ClickProjectsRequest * const q);

    static QString toString(const IoT1ClickProjectsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(IoT1ClickProjectsRequest)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
