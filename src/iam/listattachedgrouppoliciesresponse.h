// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTACHEDGROUPPOLICIESRESPONSE_H
#define QTAWS_LISTATTACHEDGROUPPOLICIESRESPONSE_H

#include "iamresponse.h"
#include "listattachedgrouppoliciesrequest.h"

namespace QtAws {
namespace Iam {

class ListAttachedGroupPoliciesResponsePrivate;

class QTAWSIAM_EXPORT ListAttachedGroupPoliciesResponse : public IamResponse {
    Q_OBJECT

public:
    ListAttachedGroupPoliciesResponse(const ListAttachedGroupPoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAttachedGroupPoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAttachedGroupPoliciesResponse)
    Q_DISABLE_COPY(ListAttachedGroupPoliciesResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
