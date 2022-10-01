// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTRESOURCESTODRAFTAPPVERSIONREQUEST_H
#define QTAWS_IMPORTRESOURCESTODRAFTAPPVERSIONREQUEST_H

#include "resiliencehubrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ImportResourcesToDraftAppVersionRequestPrivate;

class QTAWSRESILIENCEHUB_EXPORT ImportResourcesToDraftAppVersionRequest : public ResilienceHubRequest {

public:
    ImportResourcesToDraftAppVersionRequest(const ImportResourcesToDraftAppVersionRequest &other);
    ImportResourcesToDraftAppVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportResourcesToDraftAppVersionRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
