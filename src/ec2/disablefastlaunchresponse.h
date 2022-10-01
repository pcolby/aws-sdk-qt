// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEFASTLAUNCHRESPONSE_H
#define QTAWS_DISABLEFASTLAUNCHRESPONSE_H

#include "ec2response.h"
#include "disablefastlaunchrequest.h"

namespace QtAws {
namespace Ec2 {

class DisableFastLaunchResponsePrivate;

class QTAWSEC2_EXPORT DisableFastLaunchResponse : public Ec2Response {
    Q_OBJECT

public:
    DisableFastLaunchResponse(const DisableFastLaunchRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableFastLaunchRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableFastLaunchResponse)
    Q_DISABLE_COPY(DisableFastLaunchResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
