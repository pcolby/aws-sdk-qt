// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTITEMSREQUEST_H
#define QTAWS_PUTITEMSREQUEST_H

#include "personalizeeventsrequest.h"

namespace QtAws {
namespace PersonalizeEvents {

class PutItemsRequestPrivate;

class QTAWSPERSONALIZEEVENTS_EXPORT PutItemsRequest : public PersonalizeEventsRequest {

public:
    PutItemsRequest(const PutItemsRequest &other);
    PutItemsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutItemsRequest)

};

} // namespace PersonalizeEvents
} // namespace QtAws

#endif
