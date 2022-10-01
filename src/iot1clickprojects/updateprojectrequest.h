// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROJECTREQUEST_H
#define QTAWS_UPDATEPROJECTREQUEST_H

#include "iot1clickprojectsrequest.h"

namespace QtAws {
namespace IoT1ClickProjects {

class UpdateProjectRequestPrivate;

class QTAWSIOT1CLICKPROJECTS_EXPORT UpdateProjectRequest : public IoT1ClickProjectsRequest {

public:
    UpdateProjectRequest(const UpdateProjectRequest &other);
    UpdateProjectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateProjectRequest)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
