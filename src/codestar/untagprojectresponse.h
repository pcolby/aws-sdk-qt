// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGPROJECTRESPONSE_H
#define QTAWS_UNTAGPROJECTRESPONSE_H

#include "codestarresponse.h"
#include "untagprojectrequest.h"

namespace QtAws {
namespace CodeStar {

class UntagProjectResponsePrivate;

class QTAWSCODESTAR_EXPORT UntagProjectResponse : public CodeStarResponse {
    Q_OBJECT

public:
    UntagProjectResponse(const UntagProjectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UntagProjectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UntagProjectResponse)
    Q_DISABLE_COPY(UntagProjectResponse)

};

} // namespace CodeStar
} // namespace QtAws

#endif
