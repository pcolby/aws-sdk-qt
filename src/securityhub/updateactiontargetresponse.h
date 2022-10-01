// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACTIONTARGETRESPONSE_H
#define QTAWS_UPDATEACTIONTARGETRESPONSE_H

#include "securityhubresponse.h"
#include "updateactiontargetrequest.h"

namespace QtAws {
namespace SecurityHub {

class UpdateActionTargetResponsePrivate;

class QTAWSSECURITYHUB_EXPORT UpdateActionTargetResponse : public SecurityHubResponse {
    Q_OBJECT

public:
    UpdateActionTargetResponse(const UpdateActionTargetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateActionTargetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateActionTargetResponse)
    Q_DISABLE_COPY(UpdateActionTargetResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
