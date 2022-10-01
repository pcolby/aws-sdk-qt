// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBUILDREQUEST_H
#define QTAWS_CREATEBUILDREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class CreateBuildRequestPrivate;

class QTAWSGAMELIFT_EXPORT CreateBuildRequest : public GameLiftRequest {

public:
    CreateBuildRequest(const CreateBuildRequest &other);
    CreateBuildRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBuildRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
