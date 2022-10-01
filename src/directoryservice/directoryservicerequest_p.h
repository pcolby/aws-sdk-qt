// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DIRECTORYSERVICEREQUEST_P_H
#define QTAWS_DIRECTORYSERVICEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class DirectoryServiceRequest;

class DirectoryServiceRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    DirectoryServiceRequest::Action action; ///< DirectoryService action to be performed.
    QString apiVersion;        ///< DirectoryService API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< DirectoryService request (query string) parameters. @todo?

    DirectoryServiceRequestPrivate(const DirectoryServiceRequest::Action action, DirectoryServiceRequest * const q);
    DirectoryServiceRequestPrivate(const DirectoryServiceRequestPrivate &other, DirectoryServiceRequest * const q);

    static QString toString(const DirectoryServiceRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(DirectoryServiceRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
