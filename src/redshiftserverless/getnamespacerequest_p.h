// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNAMESPACEREQUEST_P_H
#define QTAWS_GETNAMESPACEREQUEST_P_H

#include "redshiftserverlessrequest_p.h"
#include "getnamespacerequest.h"

namespace QtAws {
namespace RedshiftServerless {

class GetNamespaceRequest;

class GetNamespaceRequestPrivate : public RedshiftServerlessRequestPrivate {

public:
    GetNamespaceRequestPrivate(const RedshiftServerlessRequest::Action action,
                                   GetNamespaceRequest * const q);
    GetNamespaceRequestPrivate(const GetNamespaceRequestPrivate &other,
                                   GetNamespaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetNamespaceRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
