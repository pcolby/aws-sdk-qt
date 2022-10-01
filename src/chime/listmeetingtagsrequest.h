// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMEETINGTAGSREQUEST_H
#define QTAWS_LISTMEETINGTAGSREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class ListMeetingTagsRequestPrivate;

class QTAWSCHIME_EXPORT ListMeetingTagsRequest : public ChimeRequest {

public:
    ListMeetingTagsRequest(const ListMeetingTagsRequest &other);
    ListMeetingTagsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMeetingTagsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
