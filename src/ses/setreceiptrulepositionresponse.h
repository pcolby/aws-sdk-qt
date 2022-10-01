// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETRECEIPTRULEPOSITIONRESPONSE_H
#define QTAWS_SETRECEIPTRULEPOSITIONRESPONSE_H

#include "sesresponse.h"
#include "setreceiptrulepositionrequest.h"

namespace QtAws {
namespace Ses {

class SetReceiptRulePositionResponsePrivate;

class QTAWSSES_EXPORT SetReceiptRulePositionResponse : public SesResponse {
    Q_OBJECT

public:
    SetReceiptRulePositionResponse(const SetReceiptRulePositionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetReceiptRulePositionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetReceiptRulePositionResponse)
    Q_DISABLE_COPY(SetReceiptRulePositionResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
