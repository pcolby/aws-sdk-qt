// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATACATALOGREQUEST_H
#define QTAWS_UPDATEDATACATALOGREQUEST_H

#include "athenarequest.h"

namespace QtAws {
namespace Athena {

class UpdateDataCatalogRequestPrivate;

class QTAWSATHENA_EXPORT UpdateDataCatalogRequest : public AthenaRequest {

public:
    UpdateDataCatalogRequest(const UpdateDataCatalogRequest &other);
    UpdateDataCatalogRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDataCatalogRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
