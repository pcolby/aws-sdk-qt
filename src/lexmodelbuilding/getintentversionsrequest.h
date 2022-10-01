// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTENTVERSIONSREQUEST_H
#define QTAWS_GETINTENTVERSIONSREQUEST_H

#include "lexmodelbuildingrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetIntentVersionsRequestPrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetIntentVersionsRequest : public LexModelBuildingRequest {

public:
    GetIntentVersionsRequest(const GetIntentVersionsRequest &other);
    GetIntentVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIntentVersionsRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
