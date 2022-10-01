// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIDENTITYPOLICYRESPONSE_H
#define QTAWS_DELETEIDENTITYPOLICYRESPONSE_H

#include "sesresponse.h"
#include "deleteidentitypolicyrequest.h"

namespace QtAws {
namespace Ses {

class DeleteIdentityPolicyResponsePrivate;

class QTAWSSES_EXPORT DeleteIdentityPolicyResponse : public SesResponse {
    Q_OBJECT

public:
    DeleteIdentityPolicyResponse(const DeleteIdentityPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteIdentityPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIdentityPolicyResponse)
    Q_DISABLE_COPY(DeleteIdentityPolicyResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
