// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROJECTREQUEST_H
#define QTAWS_DELETEPROJECTREQUEST_H

#include "lookoutvisionrequest.h"

namespace QtAws {
namespace LookoutVision {

class DeleteProjectRequestPrivate;

class QTAWSLOOKOUTVISION_EXPORT DeleteProjectRequest : public LookoutVisionRequest {

public:
    DeleteProjectRequest(const DeleteProjectRequest &other);
    DeleteProjectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProjectRequest)

};

} // namespace LookoutVision
} // namespace QtAws

#endif
