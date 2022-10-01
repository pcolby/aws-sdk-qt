// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEIMAGEDEPRECATIONRESPONSE_H
#define QTAWS_ENABLEIMAGEDEPRECATIONRESPONSE_H

#include "ec2response.h"
#include "enableimagedeprecationrequest.h"

namespace QtAws {
namespace Ec2 {

class EnableImageDeprecationResponsePrivate;

class QTAWSEC2_EXPORT EnableImageDeprecationResponse : public Ec2Response {
    Q_OBJECT

public:
    EnableImageDeprecationResponse(const EnableImageDeprecationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableImageDeprecationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableImageDeprecationResponse)
    Q_DISABLE_COPY(EnableImageDeprecationResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
