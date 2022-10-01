// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSTANCEPROFILERESPONSE_H
#define QTAWS_CREATEINSTANCEPROFILERESPONSE_H

#include "iamresponse.h"
#include "createinstanceprofilerequest.h"

namespace QtAws {
namespace Iam {

class CreateInstanceProfileResponsePrivate;

class QTAWSIAM_EXPORT CreateInstanceProfileResponse : public IamResponse {
    Q_OBJECT

public:
    CreateInstanceProfileResponse(const CreateInstanceProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateInstanceProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateInstanceProfileResponse)
    Q_DISABLE_COPY(CreateInstanceProfileResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
