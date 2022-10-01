// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICEACTIONREQUEST_H
#define QTAWS_UPDATESERVICEACTIONREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class UpdateServiceActionRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT UpdateServiceActionRequest : public ServiceCatalogRequest {

public:
    UpdateServiceActionRequest(const UpdateServiceActionRequest &other);
    UpdateServiceActionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateServiceActionRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
