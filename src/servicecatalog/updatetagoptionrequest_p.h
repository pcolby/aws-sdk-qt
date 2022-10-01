// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETAGOPTIONREQUEST_P_H
#define QTAWS_UPDATETAGOPTIONREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "updatetagoptionrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class UpdateTagOptionRequest;

class UpdateTagOptionRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    UpdateTagOptionRequestPrivate(const ServiceCatalogRequest::Action action,
                                   UpdateTagOptionRequest * const q);
    UpdateTagOptionRequestPrivate(const UpdateTagOptionRequestPrivate &other,
                                   UpdateTagOptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTagOptionRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
