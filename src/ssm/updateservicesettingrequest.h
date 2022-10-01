// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICESETTINGREQUEST_H
#define QTAWS_UPDATESERVICESETTINGREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class UpdateServiceSettingRequestPrivate;

class QTAWSSSM_EXPORT UpdateServiceSettingRequest : public SsmRequest {

public:
    UpdateServiceSettingRequest(const UpdateServiceSettingRequest &other);
    UpdateServiceSettingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateServiceSettingRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
