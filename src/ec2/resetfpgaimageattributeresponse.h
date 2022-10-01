// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETFPGAIMAGEATTRIBUTERESPONSE_H
#define QTAWS_RESETFPGAIMAGEATTRIBUTERESPONSE_H

#include "ec2response.h"
#include "resetfpgaimageattributerequest.h"

namespace QtAws {
namespace Ec2 {

class ResetFpgaImageAttributeResponsePrivate;

class QTAWSEC2_EXPORT ResetFpgaImageAttributeResponse : public Ec2Response {
    Q_OBJECT

public:
    ResetFpgaImageAttributeResponse(const ResetFpgaImageAttributeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResetFpgaImageAttributeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetFpgaImageAttributeResponse)
    Q_DISABLE_COPY(ResetFpgaImageAttributeResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
