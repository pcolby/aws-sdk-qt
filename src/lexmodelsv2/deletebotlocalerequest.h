// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBOTLOCALEREQUEST_H
#define QTAWS_DELETEBOTLOCALEREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteBotLocaleRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT DeleteBotLocaleRequest : public LexModelsV2Request {

public:
    DeleteBotLocaleRequest(const DeleteBotLocaleRequest &other);
    DeleteBotLocaleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBotLocaleRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
