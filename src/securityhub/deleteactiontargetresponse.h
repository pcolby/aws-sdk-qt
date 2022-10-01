// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACTIONTARGETRESPONSE_H
#define QTAWS_DELETEACTIONTARGETRESPONSE_H

#include "securityhubresponse.h"
#include "deleteactiontargetrequest.h"

namespace QtAws {
namespace SecurityHub {

class DeleteActionTargetResponsePrivate;

class QTAWSSECURITYHUB_EXPORT DeleteActionTargetResponse : public SecurityHubResponse {
    Q_OBJECT

public:
    DeleteActionTargetResponse(const DeleteActionTargetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteActionTargetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteActionTargetResponse)
    Q_DISABLE_COPY(DeleteActionTargetResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
