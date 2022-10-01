// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPOSITORYCATALOGDATAREQUEST_H
#define QTAWS_GETREPOSITORYCATALOGDATAREQUEST_H

#include "ecrpublicrequest.h"

namespace QtAws {
namespace EcrPublic {

class GetRepositoryCatalogDataRequestPrivate;

class QTAWSECRPUBLIC_EXPORT GetRepositoryCatalogDataRequest : public EcrPublicRequest {

public:
    GetRepositoryCatalogDataRequest(const GetRepositoryCatalogDataRequest &other);
    GetRepositoryCatalogDataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRepositoryCatalogDataRequest)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
