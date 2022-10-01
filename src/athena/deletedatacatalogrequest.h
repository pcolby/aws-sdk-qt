// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATACATALOGREQUEST_H
#define QTAWS_DELETEDATACATALOGREQUEST_H

#include "athenarequest.h"

namespace QtAws {
namespace Athena {

class DeleteDataCatalogRequestPrivate;

class QTAWSATHENA_EXPORT DeleteDataCatalogRequest : public AthenaRequest {

public:
    DeleteDataCatalogRequest(const DeleteDataCatalogRequest &other);
    DeleteDataCatalogRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDataCatalogRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
