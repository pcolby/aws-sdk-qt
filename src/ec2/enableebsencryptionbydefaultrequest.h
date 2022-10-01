// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEEBSENCRYPTIONBYDEFAULTREQUEST_H
#define QTAWS_ENABLEEBSENCRYPTIONBYDEFAULTREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class EnableEbsEncryptionByDefaultRequestPrivate;

class QTAWSEC2_EXPORT EnableEbsEncryptionByDefaultRequest : public Ec2Request {

public:
    EnableEbsEncryptionByDefaultRequest(const EnableEbsEncryptionByDefaultRequest &other);
    EnableEbsEncryptionByDefaultRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableEbsEncryptionByDefaultRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
