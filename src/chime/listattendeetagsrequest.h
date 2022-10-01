// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTENDEETAGSREQUEST_H
#define QTAWS_LISTATTENDEETAGSREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class ListAttendeeTagsRequestPrivate;

class QTAWSCHIME_EXPORT ListAttendeeTagsRequest : public ChimeRequest {

public:
    ListAttendeeTagsRequest(const ListAttendeeTagsRequest &other);
    ListAttendeeTagsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAttendeeTagsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
