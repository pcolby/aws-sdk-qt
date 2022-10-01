// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBOTLOCALEREQUEST_H
#define QTAWS_UPDATEBOTLOCALEREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class UpdateBotLocaleRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT UpdateBotLocaleRequest : public LexModelsV2Request {

public:
    UpdateBotLocaleRequest(const UpdateBotLocaleRequest &other);
    UpdateBotLocaleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBotLocaleRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
