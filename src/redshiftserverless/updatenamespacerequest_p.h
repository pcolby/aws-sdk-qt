// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENAMESPACEREQUEST_P_H
#define QTAWS_UPDATENAMESPACEREQUEST_P_H

#include "redshiftserverlessrequest_p.h"
#include "updatenamespacerequest.h"

namespace QtAws {
namespace RedshiftServerless {

class UpdateNamespaceRequest;

class UpdateNamespaceRequestPrivate : public RedshiftServerlessRequestPrivate {

public:
    UpdateNamespaceRequestPrivate(const RedshiftServerlessRequest::Action action,
                                   UpdateNamespaceRequest * const q);
    UpdateNamespaceRequestPrivate(const UpdateNamespaceRequestPrivate &other,
                                   UpdateNamespaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateNamespaceRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
