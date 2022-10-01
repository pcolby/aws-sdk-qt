// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIPAMRESOURCECIDRSREQUEST_H
#define QTAWS_GETIPAMRESOURCECIDRSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class GetIpamResourceCidrsRequestPrivate;

class QTAWSEC2_EXPORT GetIpamResourceCidrsRequest : public Ec2Request {

public:
    GetIpamResourceCidrsRequest(const GetIpamResourceCidrsRequest &other);
    GetIpamResourceCidrsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIpamResourceCidrsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
