// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBOTVERSIONREQUEST_H
#define QTAWS_CREATEBOTVERSIONREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateBotVersionRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT CreateBotVersionRequest : public LexModelsV2Request {

public:
    CreateBotVersionRequest(const CreateBotVersionRequest &other);
    CreateBotVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBotVersionRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
