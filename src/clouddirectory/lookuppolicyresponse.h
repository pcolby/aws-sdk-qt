// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOOKUPPOLICYRESPONSE_H
#define QTAWS_LOOKUPPOLICYRESPONSE_H

#include "clouddirectoryresponse.h"
#include "lookuppolicyrequest.h"

namespace QtAws {
namespace CloudDirectory {

class LookupPolicyResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT LookupPolicyResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    LookupPolicyResponse(const LookupPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const LookupPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LookupPolicyResponse)
    Q_DISABLE_COPY(LookupPolicyResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
