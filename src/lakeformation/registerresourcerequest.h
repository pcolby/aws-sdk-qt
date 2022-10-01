// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERRESOURCEREQUEST_H
#define QTAWS_REGISTERRESOURCEREQUEST_H

#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class RegisterResourceRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT RegisterResourceRequest : public LakeFormationRequest {

public:
    RegisterResourceRequest(const RegisterResourceRequest &other);
    RegisterResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterResourceRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
