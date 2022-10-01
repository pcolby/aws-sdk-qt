// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREPOSITORYCATALOGDATAREQUEST_H
#define QTAWS_PUTREPOSITORYCATALOGDATAREQUEST_H

#include "ecrpublicrequest.h"

namespace QtAws {
namespace EcrPublic {

class PutRepositoryCatalogDataRequestPrivate;

class QTAWSECRPUBLIC_EXPORT PutRepositoryCatalogDataRequest : public EcrPublicRequest {

public:
    PutRepositoryCatalogDataRequest(const PutRepositoryCatalogDataRequest &other);
    PutRepositoryCatalogDataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRepositoryCatalogDataRequest)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
