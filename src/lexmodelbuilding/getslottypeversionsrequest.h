// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSLOTTYPEVERSIONSREQUEST_H
#define QTAWS_GETSLOTTYPEVERSIONSREQUEST_H

#include "lexmodelbuildingrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetSlotTypeVersionsRequestPrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetSlotTypeVersionsRequest : public LexModelBuildingRequest {

public:
    GetSlotTypeVersionsRequest(const GetSlotTypeVersionsRequest &other);
    GetSlotTypeVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSlotTypeVersionsRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
