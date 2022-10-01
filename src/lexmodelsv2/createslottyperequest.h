// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESLOTTYPEREQUEST_H
#define QTAWS_CREATESLOTTYPEREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateSlotTypeRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT CreateSlotTypeRequest : public LexModelsV2Request {

public:
    CreateSlotTypeRequest(const CreateSlotTypeRequest &other);
    CreateSlotTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSlotTypeRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
