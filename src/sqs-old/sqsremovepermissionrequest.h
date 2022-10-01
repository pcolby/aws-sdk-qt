// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSREMOVEPERMISSIONREQUEST_H
#define SQSREMOVEPERMISSIONREQUEST_H

#include "sqsrequest.h"

namespace QtAws {
namespace SqsOld {

class SqsRemovePermissionRequestPrivate;

class QTAWS_EXPORT SqsRemovePermissionRequest : public SqsRequest {

public:
    SqsRemovePermissionRequest(const QString &queueUrl, const QString &label);
    SqsRemovePermissionRequest(const SqsRemovePermissionRequest &other);
    SqsRemovePermissionRequest();

    virtual bool isValid() const;

    QString label() const;
    QString queueUrl() const;

    void setLabel(const QString &label);
    void setQueueUrl(const QString &queueUrl);

protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const;

private:
    Q_DECLARE_PRIVATE(SqsRemovePermissionRequest)
    friend class TestSqsRemovePermissionRequest;
};

} // namespace SqsOld
} // namespace QtAws

#endif
