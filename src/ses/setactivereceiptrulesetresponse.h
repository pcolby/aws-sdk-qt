// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETACTIVERECEIPTRULESETRESPONSE_H
#define QTAWS_SETACTIVERECEIPTRULESETRESPONSE_H

#include "sesresponse.h"
#include "setactivereceiptrulesetrequest.h"

namespace QtAws {
namespace Ses {

class SetActiveReceiptRuleSetResponsePrivate;

class QTAWSSES_EXPORT SetActiveReceiptRuleSetResponse : public SesResponse {
    Q_OBJECT

public:
    SetActiveReceiptRuleSetResponse(const SetActiveReceiptRuleSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetActiveReceiptRuleSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetActiveReceiptRuleSetResponse)
    Q_DISABLE_COPY(SetActiveReceiptRuleSetResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
