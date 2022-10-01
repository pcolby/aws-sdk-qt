// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DECODEAUTHORIZATIONMESSAGEREQUEST_H
#define QTAWS_DECODEAUTHORIZATIONMESSAGEREQUEST_H

#include "stsrequest.h"

namespace QtAws {
namespace Sts {

class DecodeAuthorizationMessageRequestPrivate;

class QTAWSSTS_EXPORT DecodeAuthorizationMessageRequest : public StsRequest {

public:
    DecodeAuthorizationMessageRequest(const DecodeAuthorizationMessageRequest &other);
    DecodeAuthorizationMessageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DecodeAuthorizationMessageRequest)

};

} // namespace Sts
} // namespace QtAws

#endif
