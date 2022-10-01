// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTAPPCATALOGREQUEST_P_H
#define QTAWS_IMPORTAPPCATALOGREQUEST_P_H

#include "smsrequest_p.h"
#include "importappcatalogrequest.h"

namespace QtAws {
namespace Sms {

class ImportAppCatalogRequest;

class ImportAppCatalogRequestPrivate : public SmsRequestPrivate {

public:
    ImportAppCatalogRequestPrivate(const SmsRequest::Action action,
                                   ImportAppCatalogRequest * const q);
    ImportAppCatalogRequestPrivate(const ImportAppCatalogRequestPrivate &other,
                                   ImportAppCatalogRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportAppCatalogRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
