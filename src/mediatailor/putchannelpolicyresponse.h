// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCHANNELPOLICYRESPONSE_H
#define QTAWS_PUTCHANNELPOLICYRESPONSE_H

#include "mediatailorresponse.h"
#include "putchannelpolicyrequest.h"

namespace QtAws {
namespace MediaTailor {

class PutChannelPolicyResponsePrivate;

class QTAWSMEDIATAILOR_EXPORT PutChannelPolicyResponse : public MediaTailorResponse {
    Q_OBJECT

public:
    PutChannelPolicyResponse(const PutChannelPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutChannelPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutChannelPolicyResponse)
    Q_DISABLE_COPY(PutChannelPolicyResponse)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
