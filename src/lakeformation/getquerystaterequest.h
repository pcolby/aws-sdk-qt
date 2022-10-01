// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUERYSTATEREQUEST_H
#define QTAWS_GETQUERYSTATEREQUEST_H

#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class GetQueryStateRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT GetQueryStateRequest : public LakeFormationRequest {

public:
    GetQueryStateRequest(const GetQueryStateRequest &other);
    GetQueryStateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetQueryStateRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
