// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGROUPRESPONSE_H
#define QTAWS_DESCRIBEGROUPRESPONSE_H

#include "identitystoreresponse.h"
#include "describegrouprequest.h"

namespace QtAws {
namespace IdentityStore {

class DescribeGroupResponsePrivate;

class QTAWSIDENTITYSTORE_EXPORT DescribeGroupResponse : public IdentityStoreResponse {
    Q_OBJECT

public:
    DescribeGroupResponse(const DescribeGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGroupResponse)
    Q_DISABLE_COPY(DescribeGroupResponse)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
