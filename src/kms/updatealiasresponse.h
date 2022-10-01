// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEALIASRESPONSE_H
#define QTAWS_UPDATEALIASRESPONSE_H

#include "kmsresponse.h"
#include "updatealiasrequest.h"

namespace QtAws {
namespace Kms {

class UpdateAliasResponsePrivate;

class QTAWSKMS_EXPORT UpdateAliasResponse : public KmsResponse {
    Q_OBJECT

public:
    UpdateAliasResponse(const UpdateAliasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAliasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAliasResponse)
    Q_DISABLE_COPY(UpdateAliasResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
