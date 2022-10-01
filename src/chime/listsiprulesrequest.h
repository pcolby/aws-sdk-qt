// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIPRULESREQUEST_H
#define QTAWS_LISTSIPRULESREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class ListSipRulesRequestPrivate;

class QTAWSCHIME_EXPORT ListSipRulesRequest : public ChimeRequest {

public:
    ListSipRulesRequest(const ListSipRulesRequest &other);
    ListSipRulesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSipRulesRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
