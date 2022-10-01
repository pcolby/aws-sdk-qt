// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANNELPOLICYRESPONSE_H
#define QTAWS_GETCHANNELPOLICYRESPONSE_H

#include "mediatailorresponse.h"
#include "getchannelpolicyrequest.h"

namespace QtAws {
namespace MediaTailor {

class GetChannelPolicyResponsePrivate;

class QTAWSMEDIATAILOR_EXPORT GetChannelPolicyResponse : public MediaTailorResponse {
    Q_OBJECT

public:
    GetChannelPolicyResponse(const GetChannelPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetChannelPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetChannelPolicyResponse)
    Q_DISABLE_COPY(GetChannelPolicyResponse)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
