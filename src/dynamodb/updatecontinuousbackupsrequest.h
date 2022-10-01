// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTINUOUSBACKUPSREQUEST_H
#define QTAWS_UPDATECONTINUOUSBACKUPSREQUEST_H

#include "dynamodbrequest.h"

namespace QtAws {
namespace DynamoDb {

class UpdateContinuousBackupsRequestPrivate;

class QTAWSDYNAMODB_EXPORT UpdateContinuousBackupsRequest : public DynamoDbRequest {

public:
    UpdateContinuousBackupsRequest(const UpdateContinuousBackupsRequest &other);
    UpdateContinuousBackupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateContinuousBackupsRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
