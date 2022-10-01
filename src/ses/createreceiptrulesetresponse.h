// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECEIPTRULESETRESPONSE_H
#define QTAWS_CREATERECEIPTRULESETRESPONSE_H

#include "sesresponse.h"
#include "createreceiptrulesetrequest.h"

namespace QtAws {
namespace Ses {

class CreateReceiptRuleSetResponsePrivate;

class QTAWSSES_EXPORT CreateReceiptRuleSetResponse : public SesResponse {
    Q_OBJECT

public:
    CreateReceiptRuleSetResponse(const CreateReceiptRuleSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateReceiptRuleSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateReceiptRuleSetResponse)
    Q_DISABLE_COPY(CreateReceiptRuleSetResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
