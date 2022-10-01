// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKUNITSREQUEST_H
#define QTAWS_GETWORKUNITSREQUEST_H

#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class GetWorkUnitsRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT GetWorkUnitsRequest : public LakeFormationRequest {

public:
    GetWorkUnitsRequest(const GetWorkUnitsRequest &other);
    GetWorkUnitsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWorkUnitsRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
