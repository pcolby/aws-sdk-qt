// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETINSTANCEATTRIBUTERESPONSE_H
#define QTAWS_RESETINSTANCEATTRIBUTERESPONSE_H

#include "ec2response.h"
#include "resetinstanceattributerequest.h"

namespace QtAws {
namespace Ec2 {

class ResetInstanceAttributeResponsePrivate;

class QTAWSEC2_EXPORT ResetInstanceAttributeResponse : public Ec2Response {
    Q_OBJECT

public:
    ResetInstanceAttributeResponse(const ResetInstanceAttributeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResetInstanceAttributeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetInstanceAttributeResponse)
    Q_DISABLE_COPY(ResetInstanceAttributeResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
