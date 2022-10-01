// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESLOTREQUEST_H
#define QTAWS_CREATESLOTREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateSlotRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT CreateSlotRequest : public LexModelsV2Request {

public:
    CreateSlotRequest(const CreateSlotRequest &other);
    CreateSlotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSlotRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
