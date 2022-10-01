// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYFLEETREQUEST_H
#define QTAWS_MODIFYFLEETREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyFleetRequestPrivate;

class QTAWSEC2_EXPORT ModifyFleetRequest : public Ec2Request {

public:
    ModifyFleetRequest(const ModifyFleetRequest &other);
    ModifyFleetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyFleetRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
