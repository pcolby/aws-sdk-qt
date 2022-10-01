// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREGISTRYCATALOGDATAREQUEST_H
#define QTAWS_PUTREGISTRYCATALOGDATAREQUEST_H

#include "ecrpublicrequest.h"

namespace QtAws {
namespace EcrPublic {

class PutRegistryCatalogDataRequestPrivate;

class QTAWSECRPUBLIC_EXPORT PutRegistryCatalogDataRequest : public EcrPublicRequest {

public:
    PutRegistryCatalogDataRequest(const PutRegistryCatalogDataRequest &other);
    PutRegistryCatalogDataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRegistryCatalogDataRequest)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
