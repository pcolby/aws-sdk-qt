// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATACATALOGREQUEST_H
#define QTAWS_CREATEDATACATALOGREQUEST_H

#include "athenarequest.h"

namespace QtAws {
namespace Athena {

class CreateDataCatalogRequestPrivate;

class QTAWSATHENA_EXPORT CreateDataCatalogRequest : public AthenaRequest {

public:
    CreateDataCatalogRequest(const CreateDataCatalogRequest &other);
    CreateDataCatalogRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDataCatalogRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
