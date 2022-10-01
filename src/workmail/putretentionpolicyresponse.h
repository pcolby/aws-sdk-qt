// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRETENTIONPOLICYRESPONSE_H
#define QTAWS_PUTRETENTIONPOLICYRESPONSE_H

#include "workmailresponse.h"
#include "putretentionpolicyrequest.h"

namespace QtAws {
namespace WorkMail {

class PutRetentionPolicyResponsePrivate;

class QTAWSWORKMAIL_EXPORT PutRetentionPolicyResponse : public WorkMailResponse {
    Q_OBJECT

public:
    PutRetentionPolicyResponse(const PutRetentionPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutRetentionPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRetentionPolicyResponse)
    Q_DISABLE_COPY(PutRetentionPolicyResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
