// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANNELPOLICYRESPONSE_H
#define QTAWS_DELETECHANNELPOLICYRESPONSE_H

#include "mediatailorresponse.h"
#include "deletechannelpolicyrequest.h"

namespace QtAws {
namespace MediaTailor {

class DeleteChannelPolicyResponsePrivate;

class QTAWSMEDIATAILOR_EXPORT DeleteChannelPolicyResponse : public MediaTailorResponse {
    Q_OBJECT

public:
    DeleteChannelPolicyResponse(const DeleteChannelPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteChannelPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteChannelPolicyResponse)
    Q_DISABLE_COPY(DeleteChannelPolicyResponse)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
