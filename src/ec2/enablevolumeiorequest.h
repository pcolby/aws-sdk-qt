// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEVOLUMEIOREQUEST_H
#define QTAWS_ENABLEVOLUMEIOREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class EnableVolumeIORequestPrivate;

class QTAWSEC2_EXPORT EnableVolumeIORequest : public Ec2Request {

public:
    EnableVolumeIORequest(const EnableVolumeIORequest &other);
    EnableVolumeIORequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableVolumeIORequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
