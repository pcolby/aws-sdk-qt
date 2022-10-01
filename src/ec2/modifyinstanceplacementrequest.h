// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYINSTANCEPLACEMENTREQUEST_H
#define QTAWS_MODIFYINSTANCEPLACEMENTREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyInstancePlacementRequestPrivate;

class QTAWSEC2_EXPORT ModifyInstancePlacementRequest : public Ec2Request {

public:
    ModifyInstancePlacementRequest(const ModifyInstancePlacementRequest &other);
    ModifyInstancePlacementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyInstancePlacementRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
