// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAUNCHRESPONSE_H
#define QTAWS_GETLAUNCHRESPONSE_H

#include "evidentlyresponse.h"
#include "getlaunchrequest.h"

namespace QtAws {
namespace Evidently {

class GetLaunchResponsePrivate;

class QTAWSEVIDENTLY_EXPORT GetLaunchResponse : public EvidentlyResponse {
    Q_OBJECT

public:
    GetLaunchResponse(const GetLaunchRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLaunchRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLaunchResponse)
    Q_DISABLE_COPY(GetLaunchResponse)

};

} // namespace Evidently
} // namespace QtAws

#endif
