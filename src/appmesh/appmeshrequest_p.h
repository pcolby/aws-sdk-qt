// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPMESHREQUEST_P_H
#define QTAWS_APPMESHREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "appmeshrequest.h"

namespace QtAws {
namespace AppMesh {

class AppMeshRequest;

class AppMeshRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    AppMeshRequest::Action action; ///< AppMesh action to be performed.
    QString apiVersion;        ///< AppMesh API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< AppMesh request (query string) parameters. @todo?

    AppMeshRequestPrivate(const AppMeshRequest::Action action, AppMeshRequest * const q);
    AppMeshRequestPrivate(const AppMeshRequestPrivate &other, AppMeshRequest * const q);

    static QString toString(const AppMeshRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(AppMeshRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif
