// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATACATALOGREQUEST_H
#define QTAWS_GETDATACATALOGREQUEST_H

#include "athenarequest.h"

namespace QtAws {
namespace Athena {

class GetDataCatalogRequestPrivate;

class QTAWSATHENA_EXPORT GetDataCatalogRequest : public AthenaRequest {

public:
    GetDataCatalogRequest(const GetDataCatalogRequest &other);
    GetDataCatalogRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDataCatalogRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
