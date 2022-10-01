// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYFPGAIMAGEREQUEST_H
#define QTAWS_COPYFPGAIMAGEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CopyFpgaImageRequestPrivate;

class QTAWSEC2_EXPORT CopyFpgaImageRequest : public Ec2Request {

public:
    CopyFpgaImageRequest(const CopyFpgaImageRequest &other);
    CopyFpgaImageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CopyFpgaImageRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
