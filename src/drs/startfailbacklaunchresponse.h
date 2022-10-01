// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFAILBACKLAUNCHRESPONSE_H
#define QTAWS_STARTFAILBACKLAUNCHRESPONSE_H

#include "drsresponse.h"
#include "startfailbacklaunchrequest.h"

namespace QtAws {
namespace Drs {

class StartFailbackLaunchResponsePrivate;

class QTAWSDRS_EXPORT StartFailbackLaunchResponse : public DrsResponse {
    Q_OBJECT

public:
    StartFailbackLaunchResponse(const StartFailbackLaunchRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartFailbackLaunchRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartFailbackLaunchResponse)
    Q_DISABLE_COPY(StartFailbackLaunchResponse)

};

} // namespace Drs
} // namespace QtAws

#endif
