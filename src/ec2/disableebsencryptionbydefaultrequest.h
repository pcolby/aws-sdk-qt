// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEEBSENCRYPTIONBYDEFAULTREQUEST_H
#define QTAWS_DISABLEEBSENCRYPTIONBYDEFAULTREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DisableEbsEncryptionByDefaultRequestPrivate;

class QTAWSEC2_EXPORT DisableEbsEncryptionByDefaultRequest : public Ec2Request {

public:
    DisableEbsEncryptionByDefaultRequest(const DisableEbsEncryptionByDefaultRequest &other);
    DisableEbsEncryptionByDefaultRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableEbsEncryptionByDefaultRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
