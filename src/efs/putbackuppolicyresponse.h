// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBACKUPPOLICYRESPONSE_H
#define QTAWS_PUTBACKUPPOLICYRESPONSE_H

#include "efsresponse.h"
#include "putbackuppolicyrequest.h"

namespace QtAws {
namespace Efs {

class PutBackupPolicyResponsePrivate;

class QTAWSEFS_EXPORT PutBackupPolicyResponse : public EfsResponse {
    Q_OBJECT

public:
    PutBackupPolicyResponse(const PutBackupPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutBackupPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBackupPolicyResponse)
    Q_DISABLE_COPY(PutBackupPolicyResponse)

};

} // namespace Efs
} // namespace QtAws

#endif
