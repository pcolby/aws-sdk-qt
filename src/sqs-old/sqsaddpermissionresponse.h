// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSADDPERMISSION_H
#define SQSADDPERMISSION_H

#include "sqsaddpermissionrequest.h"
#include "sqsresponse.h"

namespace QtAws {
namespace SqsOld {

class SqsAddPermissionResponsePrivate;

class QTAWS_EXPORT SqsAddPermissionResponse : public SqsResponse {
    Q_OBJECT

public:
    SqsAddPermissionResponse(const SqsAddPermissionRequest &request,
                             QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SqsAddPermissionRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(SqsAddPermissionResponse)
    Q_DISABLE_COPY(SqsAddPermissionResponse)
    friend class TestSqsAddPermissionResponse;
};

} // namespace SqsOld
} // namespace QtAws

#endif
