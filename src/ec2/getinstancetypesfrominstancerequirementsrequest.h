// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCETYPESFROMINSTANCEREQUIREMENTSREQUEST_H
#define QTAWS_GETINSTANCETYPESFROMINSTANCEREQUIREMENTSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class GetInstanceTypesFromInstanceRequirementsRequestPrivate;

class QTAWSEC2_EXPORT GetInstanceTypesFromInstanceRequirementsRequest : public Ec2Request {

public:
    GetInstanceTypesFromInstanceRequirementsRequest(const GetInstanceTypesFromInstanceRequirementsRequest &other);
    GetInstanceTypesFromInstanceRequirementsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInstanceTypesFromInstanceRequirementsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
