// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERIMAGERESPONSE_H
#define QTAWS_REGISTERIMAGERESPONSE_H

#include "ec2response.h"
#include "registerimagerequest.h"

namespace QtAws {
namespace Ec2 {

class RegisterImageResponsePrivate;

class QTAWSEC2_EXPORT RegisterImageResponse : public Ec2Response {
    Q_OBJECT

public:
    RegisterImageResponse(const RegisterImageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterImageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterImageResponse)
    Q_DISABLE_COPY(RegisterImageResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
