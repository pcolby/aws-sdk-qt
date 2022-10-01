// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANNELPOLICYRESPONSE_P_H
#define QTAWS_DELETECHANNELPOLICYRESPONSE_P_H

#include "mediatailorresponse_p.h"

namespace QtAws {
namespace MediaTailor {

class DeleteChannelPolicyResponse;

class DeleteChannelPolicyResponsePrivate : public MediaTailorResponsePrivate {

public:

    explicit DeleteChannelPolicyResponsePrivate(DeleteChannelPolicyResponse * const q);

    void parseDeleteChannelPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteChannelPolicyResponse)
    Q_DISABLE_COPY(DeleteChannelPolicyResponsePrivate)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
