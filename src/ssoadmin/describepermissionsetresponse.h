// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPERMISSIONSETRESPONSE_H
#define QTAWS_DESCRIBEPERMISSIONSETRESPONSE_H

#include "ssoadminresponse.h"
#include "describepermissionsetrequest.h"

namespace QtAws {
namespace SsoAdmin {

class DescribePermissionSetResponsePrivate;

class QTAWSSSOADMIN_EXPORT DescribePermissionSetResponse : public SsoAdminResponse {
    Q_OBJECT

public:
    DescribePermissionSetResponse(const DescribePermissionSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePermissionSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePermissionSetResponse)
    Q_DISABLE_COPY(DescribePermissionSetResponse)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
