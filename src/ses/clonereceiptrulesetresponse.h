// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLONERECEIPTRULESETRESPONSE_H
#define QTAWS_CLONERECEIPTRULESETRESPONSE_H

#include "sesresponse.h"
#include "clonereceiptrulesetrequest.h"

namespace QtAws {
namespace Ses {

class CloneReceiptRuleSetResponsePrivate;

class QTAWSSES_EXPORT CloneReceiptRuleSetResponse : public SesResponse {
    Q_OBJECT

public:
    CloneReceiptRuleSetResponse(const CloneReceiptRuleSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CloneReceiptRuleSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CloneReceiptRuleSetResponse)
    Q_DISABLE_COPY(CloneReceiptRuleSetResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
