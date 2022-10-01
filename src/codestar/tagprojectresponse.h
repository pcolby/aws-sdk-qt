// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGPROJECTRESPONSE_H
#define QTAWS_TAGPROJECTRESPONSE_H

#include "codestarresponse.h"
#include "tagprojectrequest.h"

namespace QtAws {
namespace CodeStar {

class TagProjectResponsePrivate;

class QTAWSCODESTAR_EXPORT TagProjectResponse : public CodeStarResponse {
    Q_OBJECT

public:
    TagProjectResponse(const TagProjectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TagProjectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagProjectResponse)
    Q_DISABLE_COPY(TagProjectResponse)

};

} // namespace CodeStar
} // namespace QtAws

#endif
