// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROLEDESCRIPTIONRESPONSE_H
#define QTAWS_UPDATEROLEDESCRIPTIONRESPONSE_H

#include "iamresponse.h"
#include "updateroledescriptionrequest.h"

namespace QtAws {
namespace Iam {

class UpdateRoleDescriptionResponsePrivate;

class QTAWSIAM_EXPORT UpdateRoleDescriptionResponse : public IamResponse {
    Q_OBJECT

public:
    UpdateRoleDescriptionResponse(const UpdateRoleDescriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRoleDescriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRoleDescriptionResponse)
    Q_DISABLE_COPY(UpdateRoleDescriptionResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
