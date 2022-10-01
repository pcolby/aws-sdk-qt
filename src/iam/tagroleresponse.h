// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGROLERESPONSE_H
#define QTAWS_TAGROLERESPONSE_H

#include "iamresponse.h"
#include "tagrolerequest.h"

namespace QtAws {
namespace Iam {

class TagRoleResponsePrivate;

class QTAWSIAM_EXPORT TagRoleResponse : public IamResponse {
    Q_OBJECT

public:
    TagRoleResponse(const TagRoleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TagRoleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagRoleResponse)
    Q_DISABLE_COPY(TagRoleResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
