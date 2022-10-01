// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFEDERATIONTOKENREQUEST_H
#define QTAWS_GETFEDERATIONTOKENREQUEST_H

#include "stsrequest.h"

namespace QtAws {
namespace Sts {

class GetFederationTokenRequestPrivate;

class QTAWSSTS_EXPORT GetFederationTokenRequest : public StsRequest {

public:
    GetFederationTokenRequest(const GetFederationTokenRequest &other);
    GetFederationTokenRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFederationTokenRequest)

};

} // namespace Sts
} // namespace QtAws

#endif
