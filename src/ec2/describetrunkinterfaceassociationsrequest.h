// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRUNKINTERFACEASSOCIATIONSREQUEST_H
#define QTAWS_DESCRIBETRUNKINTERFACEASSOCIATIONSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeTrunkInterfaceAssociationsRequestPrivate;

class QTAWSEC2_EXPORT DescribeTrunkInterfaceAssociationsRequest : public Ec2Request {

public:
    DescribeTrunkInterfaceAssociationsRequest(const DescribeTrunkInterfaceAssociationsRequest &other);
    DescribeTrunkInterfaceAssociationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTrunkInterfaceAssociationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
