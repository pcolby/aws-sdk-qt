// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESILIENCYPOLICYREQUEST_H
#define QTAWS_UPDATERESILIENCYPOLICYREQUEST_H

#include "resiliencehubrequest.h"

namespace QtAws {
namespace ResilienceHub {

class UpdateResiliencyPolicyRequestPrivate;

class QTAWSRESILIENCEHUB_EXPORT UpdateResiliencyPolicyRequest : public ResilienceHubRequest {

public:
    UpdateResiliencyPolicyRequest(const UpdateResiliencyPolicyRequest &other);
    UpdateResiliencyPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateResiliencyPolicyRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
