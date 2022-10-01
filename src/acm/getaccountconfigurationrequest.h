// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTCONFIGURATIONREQUEST_H
#define QTAWS_GETACCOUNTCONFIGURATIONREQUEST_H

#include "acmrequest.h"

namespace QtAws {
namespace Acm {

class GetAccountConfigurationRequestPrivate;

class QTAWSACM_EXPORT GetAccountConfigurationRequest : public AcmRequest {

public:
    GetAccountConfigurationRequest(const GetAccountConfigurationRequest &other);
    GetAccountConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccountConfigurationRequest)

};

} // namespace Acm
} // namespace QtAws

#endif
