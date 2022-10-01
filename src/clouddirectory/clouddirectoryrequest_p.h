// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDDIRECTORYREQUEST_P_H
#define QTAWS_CLOUDDIRECTORYREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class CloudDirectoryRequest;

class CloudDirectoryRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CloudDirectoryRequest::Action action; ///< CloudDirectory action to be performed.
    QString apiVersion;        ///< CloudDirectory API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CloudDirectory request (query string) parameters. @todo?

    CloudDirectoryRequestPrivate(const CloudDirectoryRequest::Action action, CloudDirectoryRequest * const q);
    CloudDirectoryRequestPrivate(const CloudDirectoryRequestPrivate &other, CloudDirectoryRequest * const q);

    static QString toString(const CloudDirectoryRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CloudDirectoryRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
