// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBUILDREQUEST_H
#define QTAWS_UPDATEBUILDREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class UpdateBuildRequestPrivate;

class QTAWSGAMELIFT_EXPORT UpdateBuildRequest : public GameLiftRequest {

public:
    UpdateBuildRequest(const UpdateBuildRequest &other);
    UpdateBuildRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBuildRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
