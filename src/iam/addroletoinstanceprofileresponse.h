// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDROLETOINSTANCEPROFILERESPONSE_H
#define QTAWS_ADDROLETOINSTANCEPROFILERESPONSE_H

#include "iamresponse.h"
#include "addroletoinstanceprofilerequest.h"

namespace QtAws {
namespace Iam {

class AddRoleToInstanceProfileResponsePrivate;

class QTAWSIAM_EXPORT AddRoleToInstanceProfileResponse : public IamResponse {
    Q_OBJECT

public:
    AddRoleToInstanceProfileResponse(const AddRoleToInstanceProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddRoleToInstanceProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddRoleToInstanceProfileResponse)
    Q_DISABLE_COPY(AddRoleToInstanceProfileResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
