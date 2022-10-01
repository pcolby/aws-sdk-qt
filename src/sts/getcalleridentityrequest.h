// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCALLERIDENTITYREQUEST_H
#define QTAWS_GETCALLERIDENTITYREQUEST_H

#include "stsrequest.h"

namespace QtAws {
namespace Sts {

class GetCallerIdentityRequestPrivate;

class QTAWSSTS_EXPORT GetCallerIdentityRequest : public StsRequest {

public:
    GetCallerIdentityRequest(const GetCallerIdentityRequest &other);
    GetCallerIdentityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCallerIdentityRequest)

};

} // namespace Sts
} // namespace QtAws

#endif
