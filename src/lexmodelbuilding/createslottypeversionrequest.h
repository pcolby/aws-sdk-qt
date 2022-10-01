// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESLOTTYPEVERSIONREQUEST_H
#define QTAWS_CREATESLOTTYPEVERSIONREQUEST_H

#include "lexmodelbuildingrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class CreateSlotTypeVersionRequestPrivate;

class QTAWSLEXMODELBUILDING_EXPORT CreateSlotTypeVersionRequest : public LexModelBuildingRequest {

public:
    CreateSlotTypeVersionRequest(const CreateSlotTypeVersionRequest &other);
    CreateSlotTypeVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSlotTypeVersionRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
