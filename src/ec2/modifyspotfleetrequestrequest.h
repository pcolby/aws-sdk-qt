// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYSPOTFLEETREQUESTREQUEST_H
#define QTAWS_MODIFYSPOTFLEETREQUESTREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifySpotFleetRequestRequestPrivate;

class QTAWSEC2_EXPORT ModifySpotFleetRequestRequest : public Ec2Request {

public:
    ModifySpotFleetRequestRequest(const ModifySpotFleetRequestRequest &other);
    ModifySpotFleetRequestRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifySpotFleetRequestRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
