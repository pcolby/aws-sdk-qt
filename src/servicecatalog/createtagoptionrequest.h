// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETAGOPTIONREQUEST_H
#define QTAWS_CREATETAGOPTIONREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class CreateTagOptionRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT CreateTagOptionRequest : public ServiceCatalogRequest {

public:
    CreateTagOptionRequest(const CreateTagOptionRequest &other);
    CreateTagOptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTagOptionRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
