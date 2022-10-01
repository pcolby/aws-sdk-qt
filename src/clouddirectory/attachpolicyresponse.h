// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHPOLICYRESPONSE_H
#define QTAWS_ATTACHPOLICYRESPONSE_H

#include "clouddirectoryresponse.h"
#include "attachpolicyrequest.h"

namespace QtAws {
namespace CloudDirectory {

class AttachPolicyResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT AttachPolicyResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    AttachPolicyResponse(const AttachPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AttachPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachPolicyResponse)
    Q_DISABLE_COPY(AttachPolicyResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
