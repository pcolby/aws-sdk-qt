// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETIMAGEATTRIBUTERESPONSE_H
#define QTAWS_RESETIMAGEATTRIBUTERESPONSE_H

#include "ec2response.h"
#include "resetimageattributerequest.h"

namespace QtAws {
namespace Ec2 {

class ResetImageAttributeResponsePrivate;

class QTAWSEC2_EXPORT ResetImageAttributeResponse : public Ec2Response {
    Q_OBJECT

public:
    ResetImageAttributeResponse(const ResetImageAttributeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResetImageAttributeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetImageAttributeResponse)
    Q_DISABLE_COPY(ResetImageAttributeResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
