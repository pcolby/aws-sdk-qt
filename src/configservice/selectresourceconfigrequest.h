// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SELECTRESOURCECONFIGREQUEST_H
#define QTAWS_SELECTRESOURCECONFIGREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class SelectResourceConfigRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT SelectResourceConfigRequest : public ConfigServiceRequest {

public:
    SelectResourceConfigRequest(const SelectResourceConfigRequest &other);
    SelectResourceConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SelectResourceConfigRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
