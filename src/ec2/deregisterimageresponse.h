// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERIMAGERESPONSE_H
#define QTAWS_DEREGISTERIMAGERESPONSE_H

#include "ec2response.h"
#include "deregisterimagerequest.h"

namespace QtAws {
namespace Ec2 {

class DeregisterImageResponsePrivate;

class QTAWSEC2_EXPORT DeregisterImageResponse : public Ec2Response {
    Q_OBJECT

public:
    DeregisterImageResponse(const DeregisterImageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterImageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterImageResponse)
    Q_DISABLE_COPY(DeregisterImageResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
