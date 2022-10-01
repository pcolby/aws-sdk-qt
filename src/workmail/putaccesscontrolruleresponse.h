// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCESSCONTROLRULERESPONSE_H
#define QTAWS_PUTACCESSCONTROLRULERESPONSE_H

#include "workmailresponse.h"
#include "putaccesscontrolrulerequest.h"

namespace QtAws {
namespace WorkMail {

class PutAccessControlRuleResponsePrivate;

class QTAWSWORKMAIL_EXPORT PutAccessControlRuleResponse : public WorkMailResponse {
    Q_OBJECT

public:
    PutAccessControlRuleResponse(const PutAccessControlRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutAccessControlRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAccessControlRuleResponse)
    Q_DISABLE_COPY(PutAccessControlRuleResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
