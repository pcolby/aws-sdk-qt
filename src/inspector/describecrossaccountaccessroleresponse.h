// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECROSSACCOUNTACCESSROLERESPONSE_H
#define QTAWS_DESCRIBECROSSACCOUNTACCESSROLERESPONSE_H

#include "inspectorresponse.h"
#include "describecrossaccountaccessrolerequest.h"

namespace QtAws {
namespace Inspector {

class DescribeCrossAccountAccessRoleResponsePrivate;

class QTAWSINSPECTOR_EXPORT DescribeCrossAccountAccessRoleResponse : public InspectorResponse {
    Q_OBJECT

public:
    DescribeCrossAccountAccessRoleResponse(const DescribeCrossAccountAccessRoleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCrossAccountAccessRoleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCrossAccountAccessRoleResponse)
    Q_DISABLE_COPY(DescribeCrossAccountAccessRoleResponse)

};

} // namespace Inspector
} // namespace QtAws

#endif
