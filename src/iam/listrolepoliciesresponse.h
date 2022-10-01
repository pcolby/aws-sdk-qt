// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROLEPOLICIESRESPONSE_H
#define QTAWS_LISTROLEPOLICIESRESPONSE_H

#include "iamresponse.h"
#include "listrolepoliciesrequest.h"

namespace QtAws {
namespace Iam {

class ListRolePoliciesResponsePrivate;

class QTAWSIAM_EXPORT ListRolePoliciesResponse : public IamResponse {
    Q_OBJECT

public:
    ListRolePoliciesResponse(const ListRolePoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRolePoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRolePoliciesResponse)
    Q_DISABLE_COPY(ListRolePoliciesResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
