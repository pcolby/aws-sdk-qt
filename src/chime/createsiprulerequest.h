// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESIPRULEREQUEST_H
#define QTAWS_CREATESIPRULEREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class CreateSipRuleRequestPrivate;

class QTAWSCHIME_EXPORT CreateSipRuleRequest : public ChimeRequest {

public:
    CreateSipRuleRequest(const CreateSipRuleRequest &other);
    CreateSipRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSipRuleRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
