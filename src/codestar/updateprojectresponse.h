// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROJECTRESPONSE_H
#define QTAWS_UPDATEPROJECTRESPONSE_H

#include "codestarresponse.h"
#include "updateprojectrequest.h"

namespace QtAws {
namespace CodeStar {

class UpdateProjectResponsePrivate;

class QTAWSCODESTAR_EXPORT UpdateProjectResponse : public CodeStarResponse {
    Q_OBJECT

public:
    UpdateProjectResponse(const UpdateProjectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateProjectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateProjectResponse)
    Q_DISABLE_COPY(UpdateProjectResponse)

};

} // namespace CodeStar
} // namespace QtAws

#endif
