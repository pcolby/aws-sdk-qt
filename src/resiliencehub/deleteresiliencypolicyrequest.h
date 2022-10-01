// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESILIENCYPOLICYREQUEST_H
#define QTAWS_DELETERESILIENCYPOLICYREQUEST_H

#include "resiliencehubrequest.h"

namespace QtAws {
namespace ResilienceHub {

class DeleteResiliencyPolicyRequestPrivate;

class QTAWSRESILIENCEHUB_EXPORT DeleteResiliencyPolicyRequest : public ResilienceHubRequest {

public:
    DeleteResiliencyPolicyRequest(const DeleteResiliencyPolicyRequest &other);
    DeleteResiliencyPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResiliencyPolicyRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
