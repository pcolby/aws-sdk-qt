// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGUSERRESPONSE_H
#define QTAWS_UNTAGUSERRESPONSE_H

#include "iamresponse.h"
#include "untaguserrequest.h"

namespace QtAws {
namespace Iam {

class UntagUserResponsePrivate;

class QTAWSIAM_EXPORT UntagUserResponse : public IamResponse {
    Q_OBJECT

public:
    UntagUserResponse(const UntagUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UntagUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UntagUserResponse)
    Q_DISABLE_COPY(UntagUserResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
