// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOCUMENTPERMISSIONRESPONSE_H
#define QTAWS_DESCRIBEDOCUMENTPERMISSIONRESPONSE_H

#include "ssmresponse.h"
#include "describedocumentpermissionrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeDocumentPermissionResponsePrivate;

class QTAWSSSM_EXPORT DescribeDocumentPermissionResponse : public SsmResponse {
    Q_OBJECT

public:
    DescribeDocumentPermissionResponse(const DescribeDocumentPermissionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDocumentPermissionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDocumentPermissionResponse)
    Q_DISABLE_COPY(DescribeDocumentPermissionResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
