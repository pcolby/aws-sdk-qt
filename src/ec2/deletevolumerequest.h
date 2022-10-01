// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOLUMEREQUEST_H
#define QTAWS_DELETEVOLUMEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteVolumeRequestPrivate;

class QTAWSEC2_EXPORT DeleteVolumeRequest : public Ec2Request {

public:
    DeleteVolumeRequest(const DeleteVolumeRequest &other);
    DeleteVolumeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVolumeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
