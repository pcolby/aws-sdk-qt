// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPPOLICIESRESPONSE_H
#define QTAWS_LISTGROUPPOLICIESRESPONSE_H

#include "iamresponse.h"
#include "listgrouppoliciesrequest.h"

namespace QtAws {
namespace Iam {

class ListGroupPoliciesResponsePrivate;

class QTAWSIAM_EXPORT ListGroupPoliciesResponse : public IamResponse {
    Q_OBJECT

public:
    ListGroupPoliciesResponse(const ListGroupPoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListGroupPoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGroupPoliciesResponse)
    Q_DISABLE_COPY(ListGroupPoliciesResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
