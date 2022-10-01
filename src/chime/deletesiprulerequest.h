// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESIPRULEREQUEST_H
#define QTAWS_DELETESIPRULEREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class DeleteSipRuleRequestPrivate;

class QTAWSCHIME_EXPORT DeleteSipRuleRequest : public ChimeRequest {

public:
    DeleteSipRuleRequest(const DeleteSipRuleRequest &other);
    DeleteSipRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSipRuleRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
