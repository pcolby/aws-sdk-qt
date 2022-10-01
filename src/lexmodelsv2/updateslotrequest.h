// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESLOTREQUEST_H
#define QTAWS_UPDATESLOTREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class UpdateSlotRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT UpdateSlotRequest : public LexModelsV2Request {

public:
    UpdateSlotRequest(const UpdateSlotRequest &other);
    UpdateSlotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSlotRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
