// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEBSENCRYPTIONBYDEFAULTREQUEST_H
#define QTAWS_GETEBSENCRYPTIONBYDEFAULTREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class GetEbsEncryptionByDefaultRequestPrivate;

class QTAWSEC2_EXPORT GetEbsEncryptionByDefaultRequest : public Ec2Request {

public:
    GetEbsEncryptionByDefaultRequest(const GetEbsEncryptionByDefaultRequest &other);
    GetEbsEncryptionByDefaultRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEbsEncryptionByDefaultRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
