// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBMITATTACHMENTSTATECHANGESRESPONSE_P_H
#define QTAWS_SUBMITATTACHMENTSTATECHANGESRESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class SubmitAttachmentStateChangesResponse;

class SubmitAttachmentStateChangesResponsePrivate : public EcsResponsePrivate {

public:

    explicit SubmitAttachmentStateChangesResponsePrivate(SubmitAttachmentStateChangesResponse * const q);

    void parseSubmitAttachmentStateChangesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SubmitAttachmentStateChangesResponse)
    Q_DISABLE_COPY(SubmitAttachmentStateChangesResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
