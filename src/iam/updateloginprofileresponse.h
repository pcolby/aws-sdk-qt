// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOGINPROFILERESPONSE_H
#define QTAWS_UPDATELOGINPROFILERESPONSE_H

#include "iamresponse.h"
#include "updateloginprofilerequest.h"

namespace QtAws {
namespace Iam {

class UpdateLoginProfileResponsePrivate;

class QTAWSIAM_EXPORT UpdateLoginProfileResponse : public IamResponse {
    Q_OBJECT

public:
    UpdateLoginProfileResponse(const UpdateLoginProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateLoginProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLoginProfileResponse)
    Q_DISABLE_COPY(UpdateLoginProfileResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
