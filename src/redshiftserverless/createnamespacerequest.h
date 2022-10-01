// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENAMESPACEREQUEST_H
#define QTAWS_CREATENAMESPACEREQUEST_H

#include "redshiftserverlessrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class CreateNamespaceRequestPrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT CreateNamespaceRequest : public RedshiftServerlessRequest {

public:
    CreateNamespaceRequest(const CreateNamespaceRequest &other);
    CreateNamespaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNamespaceRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
