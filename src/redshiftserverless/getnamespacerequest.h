// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNAMESPACEREQUEST_H
#define QTAWS_GETNAMESPACEREQUEST_H

#include "redshiftserverlessrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class GetNamespaceRequestPrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT GetNamespaceRequest : public RedshiftServerlessRequest {

public:
    GetNamespaceRequest(const GetNamespaceRequest &other);
    GetNamespaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetNamespaceRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
