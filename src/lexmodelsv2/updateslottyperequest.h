// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESLOTTYPEREQUEST_H
#define QTAWS_UPDATESLOTTYPEREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class UpdateSlotTypeRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT UpdateSlotTypeRequest : public LexModelsV2Request {

public:
    UpdateSlotTypeRequest(const UpdateSlotTypeRequest &other);
    UpdateSlotTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSlotTypeRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
