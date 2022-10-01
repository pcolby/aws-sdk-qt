// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCOUNTSENDINGENABLEDRESPONSE_H
#define QTAWS_UPDATEACCOUNTSENDINGENABLEDRESPONSE_H

#include "sesresponse.h"
#include "updateaccountsendingenabledrequest.h"

namespace QtAws {
namespace Ses {

class UpdateAccountSendingEnabledResponsePrivate;

class QTAWSSES_EXPORT UpdateAccountSendingEnabledResponse : public SesResponse {
    Q_OBJECT

public:
    UpdateAccountSendingEnabledResponse(const UpdateAccountSendingEnabledRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAccountSendingEnabledRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAccountSendingEnabledResponse)
    Q_DISABLE_COPY(UpdateAccountSendingEnabledResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
