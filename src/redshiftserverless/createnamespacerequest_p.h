// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENAMESPACEREQUEST_P_H
#define QTAWS_CREATENAMESPACEREQUEST_P_H

#include "redshiftserverlessrequest_p.h"
#include "createnamespacerequest.h"

namespace QtAws {
namespace RedshiftServerless {

class CreateNamespaceRequest;

class CreateNamespaceRequestPrivate : public RedshiftServerlessRequestPrivate {

public:
    CreateNamespaceRequestPrivate(const RedshiftServerlessRequest::Action action,
                                   CreateNamespaceRequest * const q);
    CreateNamespaceRequestPrivate(const CreateNamespaceRequestPrivate &other,
                                   CreateNamespaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateNamespaceRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
