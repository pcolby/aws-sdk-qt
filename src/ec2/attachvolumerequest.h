// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHVOLUMEREQUEST_H
#define QTAWS_ATTACHVOLUMEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class AttachVolumeRequestPrivate;

class QTAWSEC2_EXPORT AttachVolumeRequest : public Ec2Request {

public:
    AttachVolumeRequest(const AttachVolumeRequest &other);
    AttachVolumeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachVolumeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
