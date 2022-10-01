// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSREMOVEPERMISSION_H
#define SQSREMOVEPERMISSION_H

#include "sqsremovepermissionrequest.h"
#include "sqsresponse.h"

namespace QtAws {
namespace SqsOld {

class SqsRemovePermissionResponsePrivate;

class QTAWS_EXPORT SqsRemovePermissionResponse : public SqsResponse {
    Q_OBJECT

public:
    SqsRemovePermissionResponse(const SqsRemovePermissionRequest &request,
                             QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SqsRemovePermissionRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(SqsRemovePermissionResponse)
    Q_DISABLE_COPY(SqsRemovePermissionResponse)
    friend class TestSqsRemovePermissionResponse;
};

} // namespace SqsOld
} // namespace QtAws

#endif
