// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETSERVICESETTINGREQUEST_H
#define QTAWS_RESETSERVICESETTINGREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class ResetServiceSettingRequestPrivate;

class QTAWSSSM_EXPORT ResetServiceSettingRequest : public SsmRequest {

public:
    ResetServiceSettingRequest(const ResetServiceSettingRequest &other);
    ResetServiceSettingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetServiceSettingRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
