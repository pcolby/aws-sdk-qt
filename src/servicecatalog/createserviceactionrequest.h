// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESERVICEACTIONREQUEST_H
#define QTAWS_CREATESERVICEACTIONREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class CreateServiceActionRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT CreateServiceActionRequest : public ServiceCatalogRequest {

public:
    CreateServiceActionRequest(const CreateServiceActionRequest &other);
    CreateServiceActionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateServiceActionRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
