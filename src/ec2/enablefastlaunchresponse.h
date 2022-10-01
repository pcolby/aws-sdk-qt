// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEFASTLAUNCHRESPONSE_H
#define QTAWS_ENABLEFASTLAUNCHRESPONSE_H

#include "ec2response.h"
#include "enablefastlaunchrequest.h"

namespace QtAws {
namespace Ec2 {

class EnableFastLaunchResponsePrivate;

class QTAWSEC2_EXPORT EnableFastLaunchResponse : public Ec2Response {
    Q_OBJECT

public:
    EnableFastLaunchResponse(const EnableFastLaunchRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableFastLaunchRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableFastLaunchResponse)
    Q_DISABLE_COPY(EnableFastLaunchResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
