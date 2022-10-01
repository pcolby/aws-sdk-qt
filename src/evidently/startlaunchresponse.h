// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTLAUNCHRESPONSE_H
#define QTAWS_STARTLAUNCHRESPONSE_H

#include "evidentlyresponse.h"
#include "startlaunchrequest.h"

namespace QtAws {
namespace Evidently {

class StartLaunchResponsePrivate;

class QTAWSEVIDENTLY_EXPORT StartLaunchResponse : public EvidentlyResponse {
    Q_OBJECT

public:
    StartLaunchResponse(const StartLaunchRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartLaunchRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartLaunchResponse)
    Q_DISABLE_COPY(StartLaunchResponse)

};

} // namespace Evidently
} // namespace QtAws

#endif
