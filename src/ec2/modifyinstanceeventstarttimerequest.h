// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYINSTANCEEVENTSTARTTIMEREQUEST_H
#define QTAWS_MODIFYINSTANCEEVENTSTARTTIMEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyInstanceEventStartTimeRequestPrivate;

class QTAWSEC2_EXPORT ModifyInstanceEventStartTimeRequest : public Ec2Request {

public:
    ModifyInstanceEventStartTimeRequest(const ModifyInstanceEventStartTimeRequest &other);
    ModifyInstanceEventStartTimeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyInstanceEventStartTimeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
