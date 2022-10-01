// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTSERVERCATALOGREQUEST_P_H
#define QTAWS_IMPORTSERVERCATALOGREQUEST_P_H

#include "smsrequest_p.h"
#include "importservercatalogrequest.h"

namespace QtAws {
namespace Sms {

class ImportServerCatalogRequest;

class ImportServerCatalogRequestPrivate : public SmsRequestPrivate {

public:
    ImportServerCatalogRequestPrivate(const SmsRequest::Action action,
                                   ImportServerCatalogRequest * const q);
    ImportServerCatalogRequestPrivate(const ImportServerCatalogRequestPrivate &other,
                                   ImportServerCatalogRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportServerCatalogRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
