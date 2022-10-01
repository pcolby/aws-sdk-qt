// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTSREQUEST_H
#define QTAWS_LISTEVENTSREQUEST_H

#include "devopsgururequest.h"

namespace QtAws {
namespace DevOpsGuru {

class ListEventsRequestPrivate;

class QTAWSDEVOPSGURU_EXPORT ListEventsRequest : public DevOpsGuruRequest {

public:
    ListEventsRequest(const ListEventsRequest &other);
    ListEventsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEventsRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
