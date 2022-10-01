// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SIGNALRESOURCEREQUEST_H
#define QTAWS_SIGNALRESOURCEREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class SignalResourceRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT SignalResourceRequest : public CloudFormationRequest {

public:
    SignalResourceRequest(const SignalResourceRequest &other);
    SignalResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SignalResourceRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
