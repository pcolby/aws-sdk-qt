// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCEUEFIDATAREQUEST_H
#define QTAWS_GETINSTANCEUEFIDATAREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class GetInstanceUefiDataRequestPrivate;

class QTAWSEC2_EXPORT GetInstanceUefiDataRequest : public Ec2Request {

public:
    GetInstanceUefiDataRequest(const GetInstanceUefiDataRequest &other);
    GetInstanceUefiDataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInstanceUefiDataRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
