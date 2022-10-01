// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BUILDBOTLOCALEREQUEST_H
#define QTAWS_BUILDBOTLOCALEREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class BuildBotLocaleRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT BuildBotLocaleRequest : public LexModelsV2Request {

public:
    BuildBotLocaleRequest(const BuildBotLocaleRequest &other);
    BuildBotLocaleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BuildBotLocaleRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
