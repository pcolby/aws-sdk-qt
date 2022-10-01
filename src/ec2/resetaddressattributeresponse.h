// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETADDRESSATTRIBUTERESPONSE_H
#define QTAWS_RESETADDRESSATTRIBUTERESPONSE_H

#include "ec2response.h"
#include "resetaddressattributerequest.h"

namespace QtAws {
namespace Ec2 {

class ResetAddressAttributeResponsePrivate;

class QTAWSEC2_EXPORT ResetAddressAttributeResponse : public Ec2Response {
    Q_OBJECT

public:
    ResetAddressAttributeResponse(const ResetAddressAttributeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResetAddressAttributeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetAddressAttributeResponse)
    Q_DISABLE_COPY(ResetAddressAttributeResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
