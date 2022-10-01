// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTACHEDROLEPOLICIESRESPONSE_H
#define QTAWS_LISTATTACHEDROLEPOLICIESRESPONSE_H

#include "iamresponse.h"
#include "listattachedrolepoliciesrequest.h"

namespace QtAws {
namespace Iam {

class ListAttachedRolePoliciesResponsePrivate;

class QTAWSIAM_EXPORT ListAttachedRolePoliciesResponse : public IamResponse {
    Q_OBJECT

public:
    ListAttachedRolePoliciesResponse(const ListAttachedRolePoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAttachedRolePoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAttachedRolePoliciesResponse)
    Q_DISABLE_COPY(ListAttachedRolePoliciesResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
