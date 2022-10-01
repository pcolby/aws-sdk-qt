// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENTITIESFORPOLICYRESPONSE_H
#define QTAWS_LISTENTITIESFORPOLICYRESPONSE_H

#include "iamresponse.h"
#include "listentitiesforpolicyrequest.h"

namespace QtAws {
namespace Iam {

class ListEntitiesForPolicyResponsePrivate;

class QTAWSIAM_EXPORT ListEntitiesForPolicyResponse : public IamResponse {
    Q_OBJECT

public:
    ListEntitiesForPolicyResponse(const ListEntitiesForPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEntitiesForPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEntitiesForPolicyResponse)
    Q_DISABLE_COPY(ListEntitiesForPolicyResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
