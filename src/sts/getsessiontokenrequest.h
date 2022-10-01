// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSESSIONTOKENREQUEST_H
#define QTAWS_GETSESSIONTOKENREQUEST_H

#include "stsrequest.h"

namespace QtAws {
namespace Sts {

class GetSessionTokenRequestPrivate;

class QTAWSSTS_EXPORT GetSessionTokenRequest : public StsRequest {

public:
    GetSessionTokenRequest(const GetSessionTokenRequest &other);
    GetSessionTokenRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSessionTokenRequest)

};

} // namespace Sts
} // namespace QtAws

#endif
