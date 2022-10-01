// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICESETTINGREQUEST_H
#define QTAWS_GETSERVICESETTINGREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class GetServiceSettingRequestPrivate;

class QTAWSSSM_EXPORT GetServiceSettingRequest : public SsmRequest {

public:
    GetServiceSettingRequest(const GetServiceSettingRequest &other);
    GetServiceSettingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetServiceSettingRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
