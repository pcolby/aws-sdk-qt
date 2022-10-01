// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTAPPCATALOGREQUEST_H
#define QTAWS_IMPORTAPPCATALOGREQUEST_H

#include "smsrequest.h"

namespace QtAws {
namespace Sms {

class ImportAppCatalogRequestPrivate;

class QTAWSSMS_EXPORT ImportAppCatalogRequest : public SmsRequest {

public:
    ImportAppCatalogRequest(const ImportAppCatalogRequest &other);
    ImportAppCatalogRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportAppCatalogRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
