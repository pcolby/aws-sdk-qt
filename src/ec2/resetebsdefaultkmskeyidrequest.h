// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETEBSDEFAULTKMSKEYIDREQUEST_H
#define QTAWS_RESETEBSDEFAULTKMSKEYIDREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ResetEbsDefaultKmsKeyIdRequestPrivate;

class QTAWSEC2_EXPORT ResetEbsDefaultKmsKeyIdRequest : public Ec2Request {

public:
    ResetEbsDefaultKmsKeyIdRequest(const ResetEbsDefaultKmsKeyIdRequest &other);
    ResetEbsDefaultKmsKeyIdRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetEbsDefaultKmsKeyIdRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
