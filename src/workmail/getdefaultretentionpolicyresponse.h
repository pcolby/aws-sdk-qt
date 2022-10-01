// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEFAULTRETENTIONPOLICYRESPONSE_H
#define QTAWS_GETDEFAULTRETENTIONPOLICYRESPONSE_H

#include "workmailresponse.h"
#include "getdefaultretentionpolicyrequest.h"

namespace QtAws {
namespace WorkMail {

class GetDefaultRetentionPolicyResponsePrivate;

class QTAWSWORKMAIL_EXPORT GetDefaultRetentionPolicyResponse : public WorkMailResponse {
    Q_OBJECT

public:
    GetDefaultRetentionPolicyResponse(const GetDefaultRetentionPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDefaultRetentionPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDefaultRetentionPolicyResponse)
    Q_DISABLE_COPY(GetDefaultRetentionPolicyResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
