// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESLOTTYPEREQUEST_H
#define QTAWS_DELETESLOTTYPEREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteSlotTypeRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT DeleteSlotTypeRequest : public LexModelsV2Request {

public:
    DeleteSlotTypeRequest(const DeleteSlotTypeRequest &other);
    DeleteSlotTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSlotTypeRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
