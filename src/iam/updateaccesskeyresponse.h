// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCESSKEYRESPONSE_H
#define QTAWS_UPDATEACCESSKEYRESPONSE_H

#include "iamresponse.h"
#include "updateaccesskeyrequest.h"

namespace QtAws {
namespace Iam {

class UpdateAccessKeyResponsePrivate;

class QTAWSIAM_EXPORT UpdateAccessKeyResponse : public IamResponse {
    Q_OBJECT

public:
    UpdateAccessKeyResponse(const UpdateAccessKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAccessKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAccessKeyResponse)
    Q_DISABLE_COPY(UpdateAccessKeyResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
