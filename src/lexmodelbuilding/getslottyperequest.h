// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSLOTTYPEREQUEST_H
#define QTAWS_GETSLOTTYPEREQUEST_H

#include "lexmodelbuildingrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetSlotTypeRequestPrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetSlotTypeRequest : public LexModelBuildingRequest {

public:
    GetSlotTypeRequest(const GetSlotTypeRequest &other);
    GetSlotTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSlotTypeRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
