// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHSESSIONSREQUEST_H
#define QTAWS_SEARCHSESSIONSREQUEST_H

#include "wisdomrequest.h"

namespace QtAws {
namespace Wisdom {

class SearchSessionsRequestPrivate;

class QTAWSWISDOM_EXPORT SearchSessionsRequest : public WisdomRequest {

public:
    SearchSessionsRequest(const SearchSessionsRequest &other);
    SearchSessionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchSessionsRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
