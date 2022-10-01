// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVERCATALOGREQUEST_P_H
#define QTAWS_DELETESERVERCATALOGREQUEST_P_H

#include "smsrequest_p.h"
#include "deleteservercatalogrequest.h"

namespace QtAws {
namespace Sms {

class DeleteServerCatalogRequest;

class DeleteServerCatalogRequestPrivate : public SmsRequestPrivate {

public:
    DeleteServerCatalogRequestPrivate(const SmsRequest::Action action,
                                   DeleteServerCatalogRequest * const q);
    DeleteServerCatalogRequestPrivate(const DeleteServerCatalogRequestPrivate &other,
                                   DeleteServerCatalogRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteServerCatalogRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
