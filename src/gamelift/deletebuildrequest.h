// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUILDREQUEST_H
#define QTAWS_DELETEBUILDREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class DeleteBuildRequestPrivate;

class QTAWSGAMELIFT_EXPORT DeleteBuildRequest : public GameLiftRequest {

public:
    DeleteBuildRequest(const DeleteBuildRequest &other);
    DeleteBuildRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBuildRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
