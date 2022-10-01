// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROJECTREQUEST_H
#define QTAWS_CREATEPROJECTREQUEST_H

#include "iot1clickprojectsrequest.h"

namespace QtAws {
namespace IoT1ClickProjects {

class CreateProjectRequestPrivate;

class QTAWSIOT1CLICKPROJECTS_EXPORT CreateProjectRequest : public IoT1ClickProjectsRequest {

public:
    CreateProjectRequest(const CreateProjectRequest &other);
    CreateProjectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateProjectRequest)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
