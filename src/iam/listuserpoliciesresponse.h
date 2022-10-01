// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERPOLICIESRESPONSE_H
#define QTAWS_LISTUSERPOLICIESRESPONSE_H

#include "iamresponse.h"
#include "listuserpoliciesrequest.h"

namespace QtAws {
namespace Iam {

class ListUserPoliciesResponsePrivate;

class QTAWSIAM_EXPORT ListUserPoliciesResponse : public IamResponse {
    Q_OBJECT

public:
    ListUserPoliciesResponse(const ListUserPoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListUserPoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUserPoliciesResponse)
    Q_DISABLE_COPY(ListUserPoliciesResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
