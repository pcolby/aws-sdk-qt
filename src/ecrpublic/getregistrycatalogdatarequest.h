// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREGISTRYCATALOGDATAREQUEST_H
#define QTAWS_GETREGISTRYCATALOGDATAREQUEST_H

#include "ecrpublicrequest.h"

namespace QtAws {
namespace EcrPublic {

class GetRegistryCatalogDataRequestPrivate;

class QTAWSECRPUBLIC_EXPORT GetRegistryCatalogDataRequest : public EcrPublicRequest {

public:
    GetRegistryCatalogDataRequest(const GetRegistryCatalogDataRequest &other);
    GetRegistryCatalogDataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRegistryCatalogDataRequest)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
