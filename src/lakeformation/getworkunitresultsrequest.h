// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKUNITRESULTSREQUEST_H
#define QTAWS_GETWORKUNITRESULTSREQUEST_H

#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class GetWorkUnitResultsRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT GetWorkUnitResultsRequest : public LakeFormationRequest {

public:
    GetWorkUnitResultsRequest(const GetWorkUnitResultsRequest &other);
    GetWorkUnitResultsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWorkUnitResultsRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
