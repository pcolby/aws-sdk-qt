// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTFILESYSTEMPOLICYRESPONSE_H
#define QTAWS_PUTFILESYSTEMPOLICYRESPONSE_H

#include "efsresponse.h"
#include "putfilesystempolicyrequest.h"

namespace QtAws {
namespace Efs {

class PutFileSystemPolicyResponsePrivate;

class QTAWSEFS_EXPORT PutFileSystemPolicyResponse : public EfsResponse {
    Q_OBJECT

public:
    PutFileSystemPolicyResponse(const PutFileSystemPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutFileSystemPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutFileSystemPolicyResponse)
    Q_DISABLE_COPY(PutFileSystemPolicyResponse)

};

} // namespace Efs
} // namespace QtAws

#endif
