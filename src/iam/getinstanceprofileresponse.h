// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCEPROFILERESPONSE_H
#define QTAWS_GETINSTANCEPROFILERESPONSE_H

#include "iamresponse.h"
#include "getinstanceprofilerequest.h"

namespace QtAws {
namespace Iam {

class GetInstanceProfileResponsePrivate;

class QTAWSIAM_EXPORT GetInstanceProfileResponse : public IamResponse {
    Q_OBJECT

public:
    GetInstanceProfileResponse(const GetInstanceProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetInstanceProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInstanceProfileResponse)
    Q_DISABLE_COPY(GetInstanceProfileResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
