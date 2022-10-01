// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBUNLOCKCODEREQUEST_H
#define QTAWS_GETJOBUNLOCKCODEREQUEST_H

#include "snowballrequest.h"

namespace QtAws {
namespace Snowball {

class GetJobUnlockCodeRequestPrivate;

class QTAWSSNOWBALL_EXPORT GetJobUnlockCodeRequest : public SnowballRequest {

public:
    GetJobUnlockCodeRequest(const GetJobUnlockCodeRequest &other);
    GetJobUnlockCodeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetJobUnlockCodeRequest)

};

} // namespace Snowball
} // namespace QtAws

#endif
