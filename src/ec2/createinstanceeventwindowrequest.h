// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSTANCEEVENTWINDOWREQUEST_H
#define QTAWS_CREATEINSTANCEEVENTWINDOWREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateInstanceEventWindowRequestPrivate;

class QTAWSEC2_EXPORT CreateInstanceEventWindowRequest : public Ec2Request {

public:
    CreateInstanceEventWindowRequest(const CreateInstanceEventWindowRequest &other);
    CreateInstanceEventWindowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateInstanceEventWindowRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
