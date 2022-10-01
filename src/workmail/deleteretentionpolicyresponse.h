// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERETENTIONPOLICYRESPONSE_H
#define QTAWS_DELETERETENTIONPOLICYRESPONSE_H

#include "workmailresponse.h"
#include "deleteretentionpolicyrequest.h"

namespace QtAws {
namespace WorkMail {

class DeleteRetentionPolicyResponsePrivate;

class QTAWSWORKMAIL_EXPORT DeleteRetentionPolicyResponse : public WorkMailResponse {
    Q_OBJECT

public:
    DeleteRetentionPolicyResponse(const DeleteRetentionPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRetentionPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRetentionPolicyResponse)
    Q_DISABLE_COPY(DeleteRetentionPolicyResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
