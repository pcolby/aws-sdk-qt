// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFPGAIMAGEREQUEST_H
#define QTAWS_CREATEFPGAIMAGEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateFpgaImageRequestPrivate;

class QTAWSEC2_EXPORT CreateFpgaImageRequest : public Ec2Request {

public:
    CreateFpgaImageRequest(const CreateFpgaImageRequest &other);
    CreateFpgaImageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFpgaImageRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
