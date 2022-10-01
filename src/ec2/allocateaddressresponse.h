// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOCATEADDRESSRESPONSE_H
#define QTAWS_ALLOCATEADDRESSRESPONSE_H

#include "ec2response.h"
#include "allocateaddressrequest.h"

namespace QtAws {
namespace Ec2 {

class AllocateAddressResponsePrivate;

class QTAWSEC2_EXPORT AllocateAddressResponse : public Ec2Response {
    Q_OBJECT

public:
    AllocateAddressResponse(const AllocateAddressRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AllocateAddressRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AllocateAddressResponse)
    Q_DISABLE_COPY(AllocateAddressResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
