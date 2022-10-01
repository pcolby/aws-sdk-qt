// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFPGAIMAGEATTRIBUTERESPONSE_H
#define QTAWS_DESCRIBEFPGAIMAGEATTRIBUTERESPONSE_H

#include "ec2response.h"
#include "describefpgaimageattributerequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeFpgaImageAttributeResponsePrivate;

class QTAWSEC2_EXPORT DescribeFpgaImageAttributeResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeFpgaImageAttributeResponse(const DescribeFpgaImageAttributeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFpgaImageAttributeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFpgaImageAttributeResponse)
    Q_DISABLE_COPY(DescribeFpgaImageAttributeResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
