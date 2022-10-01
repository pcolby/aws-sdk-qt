// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGUSERRESPONSE_H
#define QTAWS_TAGUSERRESPONSE_H

#include "iamresponse.h"
#include "taguserrequest.h"

namespace QtAws {
namespace Iam {

class TagUserResponsePrivate;

class QTAWSIAM_EXPORT TagUserResponse : public IamResponse {
    Q_OBJECT

public:
    TagUserResponse(const TagUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TagUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagUserResponse)
    Q_DISABLE_COPY(TagUserResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
