// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPASSWORDDATAREQUEST_H
#define QTAWS_GETPASSWORDDATAREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class GetPasswordDataRequestPrivate;

class QTAWSEC2_EXPORT GetPasswordDataRequest : public Ec2Request {

public:
    GetPasswordDataRequest(const GetPasswordDataRequest &other);
    GetPasswordDataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPasswordDataRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
