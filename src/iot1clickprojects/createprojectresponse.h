// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROJECTRESPONSE_H
#define QTAWS_CREATEPROJECTRESPONSE_H

#include "iot1clickprojectsresponse.h"
#include "createprojectrequest.h"

namespace QtAws {
namespace IoT1ClickProjects {

class CreateProjectResponsePrivate;

class QTAWSIOT1CLICKPROJECTS_EXPORT CreateProjectResponse : public IoT1ClickProjectsResponse {
    Q_OBJECT

public:
    CreateProjectResponse(const CreateProjectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateProjectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateProjectResponse)
    Q_DISABLE_COPY(CreateProjectResponse)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
