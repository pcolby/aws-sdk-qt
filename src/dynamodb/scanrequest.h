// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SCANREQUEST_H
#define QTAWS_SCANREQUEST_H

#include "dynamodbrequest.h"

namespace QtAws {
namespace DynamoDb {

class ScanRequestPrivate;

class QTAWSDYNAMODB_EXPORT ScanRequest : public DynamoDbRequest {

public:
    ScanRequest(const ScanRequest &other);
    ScanRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ScanRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
