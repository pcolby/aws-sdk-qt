// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEJOBREQUEST_H
#define QTAWS_UPDATEJOBREQUEST_H

#include "snowballrequest.h"

namespace QtAws {
namespace Snowball {

class UpdateJobRequestPrivate;

class QTAWSSNOWBALL_EXPORT UpdateJobRequest : public SnowballRequest {

public:
    UpdateJobRequest(const UpdateJobRequest &other);
    UpdateJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateJobRequest)

};

} // namespace Snowball
} // namespace QtAws

#endif
