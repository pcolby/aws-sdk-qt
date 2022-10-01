// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHVOLUMEREQUEST_H
#define QTAWS_DETACHVOLUMEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DetachVolumeRequestPrivate;

class QTAWSEC2_EXPORT DetachVolumeRequest : public Ec2Request {

public:
    DetachVolumeRequest(const DetachVolumeRequest &other);
    DetachVolumeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachVolumeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
