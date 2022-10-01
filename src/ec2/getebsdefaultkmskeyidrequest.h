// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEBSDEFAULTKMSKEYIDREQUEST_H
#define QTAWS_GETEBSDEFAULTKMSKEYIDREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class GetEbsDefaultKmsKeyIdRequestPrivate;

class QTAWSEC2_EXPORT GetEbsDefaultKmsKeyIdRequest : public Ec2Request {

public:
    GetEbsDefaultKmsKeyIdRequest(const GetEbsDefaultKmsKeyIdRequest &other);
    GetEbsDefaultKmsKeyIdRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEbsDefaultKmsKeyIdRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
