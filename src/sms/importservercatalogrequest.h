// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTSERVERCATALOGREQUEST_H
#define QTAWS_IMPORTSERVERCATALOGREQUEST_H

#include "smsrequest.h"

namespace QtAws {
namespace Sms {

class ImportServerCatalogRequestPrivate;

class QTAWSSMS_EXPORT ImportServerCatalogRequest : public SmsRequest {

public:
    ImportServerCatalogRequest(const ImportServerCatalogRequest &other);
    ImportServerCatalogRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportServerCatalogRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
