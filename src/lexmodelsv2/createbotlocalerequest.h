// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBOTLOCALEREQUEST_H
#define QTAWS_CREATEBOTLOCALEREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateBotLocaleRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT CreateBotLocaleRequest : public LexModelsV2Request {

public:
    CreateBotLocaleRequest(const CreateBotLocaleRequest &other);
    CreateBotLocaleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBotLocaleRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
