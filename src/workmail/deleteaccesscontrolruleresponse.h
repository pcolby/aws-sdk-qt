// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCESSCONTROLRULERESPONSE_H
#define QTAWS_DELETEACCESSCONTROLRULERESPONSE_H

#include "workmailresponse.h"
#include "deleteaccesscontrolrulerequest.h"

namespace QtAws {
namespace WorkMail {

class DeleteAccessControlRuleResponsePrivate;

class QTAWSWORKMAIL_EXPORT DeleteAccessControlRuleResponse : public WorkMailResponse {
    Q_OBJECT

public:
    DeleteAccessControlRuleResponse(const DeleteAccessControlRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAccessControlRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAccessControlRuleResponse)
    Q_DISABLE_COPY(DeleteAccessControlRuleResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
