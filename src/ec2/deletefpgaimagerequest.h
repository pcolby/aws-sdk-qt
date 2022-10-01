// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFPGAIMAGEREQUEST_H
#define QTAWS_DELETEFPGAIMAGEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteFpgaImageRequestPrivate;

class QTAWSEC2_EXPORT DeleteFpgaImageRequest : public Ec2Request {

public:
    DeleteFpgaImageRequest(const DeleteFpgaImageRequest &other);
    DeleteFpgaImageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFpgaImageRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
