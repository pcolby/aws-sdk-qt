// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETAGOPTIONREQUEST_H
#define QTAWS_UPDATETAGOPTIONREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class UpdateTagOptionRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT UpdateTagOptionRequest : public ServiceCatalogRequest {

public:
    UpdateTagOptionRequest(const UpdateTagOptionRequest &other);
    UpdateTagOptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTagOptionRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
