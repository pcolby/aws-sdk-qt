// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESIPRULEREQUEST_H
#define QTAWS_UPDATESIPRULEREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class UpdateSipRuleRequestPrivate;

class QTAWSCHIME_EXPORT UpdateSipRuleRequest : public ChimeRequest {

public:
    UpdateSipRuleRequest(const UpdateSipRuleRequest &other);
    UpdateSipRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSipRuleRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
