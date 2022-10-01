// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCOUNTCONFIGURATIONREQUEST_H
#define QTAWS_PUTACCOUNTCONFIGURATIONREQUEST_H

#include "acmrequest.h"

namespace QtAws {
namespace Acm {

class PutAccountConfigurationRequestPrivate;

class QTAWSACM_EXPORT PutAccountConfigurationRequest : public AcmRequest {

public:
    PutAccountConfigurationRequest(const PutAccountConfigurationRequest &other);
    PutAccountConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAccountConfigurationRequest)

};

} // namespace Acm
} // namespace QtAws

#endif
