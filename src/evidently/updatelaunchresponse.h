// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELAUNCHRESPONSE_H
#define QTAWS_UPDATELAUNCHRESPONSE_H

#include "evidentlyresponse.h"
#include "updatelaunchrequest.h"

namespace QtAws {
namespace Evidently {

class UpdateLaunchResponsePrivate;

class QTAWSEVIDENTLY_EXPORT UpdateLaunchResponse : public EvidentlyResponse {
    Q_OBJECT

public:
    UpdateLaunchResponse(const UpdateLaunchRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateLaunchRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLaunchResponse)
    Q_DISABLE_COPY(UpdateLaunchResponse)

};

} // namespace Evidently
} // namespace QtAws

#endif
