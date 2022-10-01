// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINTENTREQUEST_H
#define QTAWS_UPDATEINTENTREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class UpdateIntentRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT UpdateIntentRequest : public LexModelsV2Request {

public:
    UpdateIntentRequest(const UpdateIntentRequest &other);
    UpdateIntentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateIntentRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
