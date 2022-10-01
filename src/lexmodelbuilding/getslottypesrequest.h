// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSLOTTYPESREQUEST_H
#define QTAWS_GETSLOTTYPESREQUEST_H

#include "lexmodelbuildingrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetSlotTypesRequestPrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetSlotTypesRequest : public LexModelBuildingRequest {

public:
    GetSlotTypesRequest(const GetSlotTypesRequest &other);
    GetSlotTypesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSlotTypesRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
