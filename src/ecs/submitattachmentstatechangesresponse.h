// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBMITATTACHMENTSTATECHANGESRESPONSE_H
#define QTAWS_SUBMITATTACHMENTSTATECHANGESRESPONSE_H

#include "ecsresponse.h"
#include "submitattachmentstatechangesrequest.h"

namespace QtAws {
namespace Ecs {

class SubmitAttachmentStateChangesResponsePrivate;

class QTAWSECS_EXPORT SubmitAttachmentStateChangesResponse : public EcsResponse {
    Q_OBJECT

public:
    SubmitAttachmentStateChangesResponse(const SubmitAttachmentStateChangesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SubmitAttachmentStateChangesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SubmitAttachmentStateChangesResponse)
    Q_DISABLE_COPY(SubmitAttachmentStateChangesResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
