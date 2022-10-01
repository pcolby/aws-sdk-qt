// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESLOTREQUEST_H
#define QTAWS_DELETESLOTREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteSlotRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT DeleteSlotRequest : public LexModelsV2Request {

public:
    DeleteSlotRequest(const DeleteSlotRequest &other);
    DeleteSlotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSlotRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
