// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGPOLICYRESPONSE_H
#define QTAWS_TAGPOLICYRESPONSE_H

#include "iamresponse.h"
#include "tagpolicyrequest.h"

namespace QtAws {
namespace Iam {

class TagPolicyResponsePrivate;

class QTAWSIAM_EXPORT TagPolicyResponse : public IamResponse {
    Q_OBJECT

public:
    TagPolicyResponse(const TagPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TagPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagPolicyResponse)
    Q_DISABLE_COPY(TagPolicyResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
