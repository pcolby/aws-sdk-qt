// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONSTRAINTREQUEST_H
#define QTAWS_UPDATECONSTRAINTREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class UpdateConstraintRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT UpdateConstraintRequest : public ServiceCatalogRequest {

public:
    UpdateConstraintRequest(const UpdateConstraintRequest &other);
    UpdateConstraintRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConstraintRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
