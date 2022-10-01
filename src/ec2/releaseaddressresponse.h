// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RELEASEADDRESSRESPONSE_H
#define QTAWS_RELEASEADDRESSRESPONSE_H

#include "ec2response.h"
#include "releaseaddressrequest.h"

namespace QtAws {
namespace Ec2 {

class ReleaseAddressResponsePrivate;

class QTAWSEC2_EXPORT ReleaseAddressResponse : public Ec2Response {
    Q_OBJECT

public:
    ReleaseAddressResponse(const ReleaseAddressRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ReleaseAddressRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReleaseAddressResponse)
    Q_DISABLE_COPY(ReleaseAddressResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
