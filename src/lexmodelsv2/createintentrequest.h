// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINTENTREQUEST_H
#define QTAWS_CREATEINTENTREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateIntentRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT CreateIntentRequest : public LexModelsV2Request {

public:
    CreateIntentRequest(const CreateIntentRequest &other);
    CreateIntentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateIntentRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
